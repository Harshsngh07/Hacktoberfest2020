/*The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}*/

#include <iostream>
#include<stack>
using namespace std;

int* stockSpan(int *price, int size)
{
    stack<int> st;
    int *ans = new int[size]; //initializing for the first price
    st.push(0);  ans[0] = 1;
    for(int i=1; i<size; i++)
    {
        while(!st.empty() && (price[st.top()] < price[i]))
            st.pop();

        if(st.empty()) ans[i] = i+1;
        else ans[i] = i-st.top();

        st.push(i);
    }
    return ans;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for(int i = 0; i < size; i++) {
    	cin >> input[i];
    }
    int *output = stockSpan(input, size);
    for(int i = 0; i < size; i++) {
    	cout << output[i] << " ";
    }
}
