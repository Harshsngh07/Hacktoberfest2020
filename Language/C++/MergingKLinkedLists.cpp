/*
Problem statement: 

Given k sorted singly linked lists, we have to write a function to merge all the lists into one sorted singly linked list.
*/

/* Solutions */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(): next(nullptr) {}
    node(int v): val(v), next(nullptr) {}
};

node* insert(node* ll, int val) {
    node* temp = ll;
    while(temp->next)   
        temp = temp->next;
    temp->next = new node(val);
    return ll;
}

void print(node* ll) {
    node* temp = ll;
    while(temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* merging routine */
node* mergell(node* listone, node* listtwo) {
    if(!listone)
        return listtwo;

    if(!listtwo)
        return listone;

    node* ans = NULL;
    if(listone->val <= listtwo->val) {
        ans = listone;
        ans->next = mergell(listone->next, listtwo);
    } else {
        ans = listtwo;
        ans->next = mergell(listone, listtwo->next);
    }

    return ans;
}

/* Divide and conquer method */
node* merge(vector<node*>& v) {
    if(v.size() <= 1)
        return (v.size() == 0) ? NULL : v[0];

    int i, j, end = v.size()-1;
    while(end != 0) {
        i = 0, j = end;
        while(i < j) {
            v[i] = mergell(v[i], v[j]);
            i++, j--;

            if(i >= j)
                end = j;
        }
    }

    return v[0];
}

/* Priority queue method */
node* mergepq(vector<node*> v) {
    if(v.size() == 0)
        return NULL;

    node* ans = NULL;
    node* finalans = ans;
    priority_queue<node*, vector<node*>, greater<node*>> pq;

    for(int i = 0; i < v.size(); i++) 
        if(v[i]) pq.push(v[i]);

    while(!pq.empty()) {
        node* top = pq.top();
        pq.pop();

        if(!ans) 
            ans = top;
        else
            ans->next = top;
        ans = ans->next;

        if(top->next) {
            pq.push(top->next);
        }
    } 

    return finalans;
}

int main() {

    int k, n, val;
    cin >> k;

    vector<node*> v(k);
    for(int i = 0; i < k; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> val;
            if(j == 0)
                v[i] = new node(val);
            else
                v[i] = insert(v[i], val);
        }
    }

    node* ans;
    ans = merge(v);
    print(ans);

    return 0;
}
