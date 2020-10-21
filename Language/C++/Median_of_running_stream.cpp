#include <iostream>
#include<stdio.h>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int median=x;
    priority_queue<int,vector<int>,greater<int> > minR;
    priority_queue<int> maxL;
    minR.push(x);

        while(scanf("%d",&x)!=EOF){
            if(x==-1){
                cout<<median<<" ";
            }
            else{
            if(x<median){
                maxL.push(x);
            }
            else{
                minR.push(x);
            }
            if(abs(maxL.size()-minR.size())>1){
                if(maxL.size()>minR.size()){
                    minR.push(maxL.top());
                    maxL.pop();
                }
                else{
                    maxL.push(minR.top());
                    minR.pop();
                }
            }
            if(maxL.size()==minR.size()){
                median=(maxL.top()+minR.top())/2;
            }
            else{
                if(maxL.size()-minR.size()==1){
                    median=maxL.top();
                }
                else{
                    median=minR.top();
                }
            }
        }
        }

    return 0;
}
