#include<iostream>
using namespace std;
int main()
{
    int i,n,num[100];
    float avg,sum=0.0;
    cout<<"enter the number of elements ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter number "<<i+1<<endl;
        cin>>num[i];
        sum+=num[i];
    }
    avg=sum/n;
    cout<<"average of the elements is "<<avg<<endl;
    return 0;
}