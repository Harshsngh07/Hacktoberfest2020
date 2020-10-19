/*
Problem statement: 

Implement a queue using two stacks. 

Recall that a queue is a FIFO (first-in, first-out) data structure 
with the following methods: enqueue, which inserts an element into the queue, and dequeue, which removes it.
*/

/* Solution */

/*
Implement a queue using two stacks. Recall that a queue is a FIFO (first-in, first-out) data structure 
with the following methods: enqueue, which inserts an element into the queue, and dequeue, which removes it.
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class qclass {
    stack<int> s1;
    stack<int> s2;
    int fr;
public:
    qclass(): fr(-1) {}

    /* This commented part takes O(n) time on push */
    // void push(int val) {
    //     while(!s1.empty())
    //     {
    //         s2.push(s1.top());
    //         s1,pop();
    //     }
    //     s2.push(val);

    //     while(!s2.empty()) {
    //         s1.push(s2.top());
    //         s2.pop();
    //     }
    // }

    // int pop() {
    //     if(s1.empty())
    //         return -1;
    //     int ans = s1.top();
    //     s1.pop();
    //     return ans;
    // }

    //alternate (takes amortised O(1) time)
    void push(int val) {
        if(s1.empty())
            fr = val;
        s1.push(val);
    }

    int pop() {
        int v;
        if(s2.empty()) {
            if(s1.empty()) {
                cout << "Queue is empty!" << endl;
                return -1;
            }
            while(!s1.empty()) {
                v = s1.top();
                s1.pop();
                s2.push(v);
            }
        }
        v = s2.top();
        s2.pop();
        return v;
    }

    bool empty() {
        // return s1.empty();
        return s1.empty() && s2.empty();
    }

    int front() {
        // return s1.empty() ? -1 : s1.top();
        if(!s2.empty())
            return s2.top();
        return fr;
    }

    int size() {
        // return s1.size();
        return s1.size() + s2.size();
    }
};

int main() {
    qclass qu;

    qu.push(10);
    qu.push(20);
    qu.push(23);

    cout << "popped: " << qu.pop() << endl;
    cout << "top: " << qu.front() << endl;

    qu.push(45);
    qu.push(54);
    qu.push(32);

    cout << "size: " << qu.size() << endl;
    cout << "popped: " << qu.pop() << endl;
    cout << "top: " << qu.front() << endl;
    cout << "is empty? ";
    if(qu.empty())
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}