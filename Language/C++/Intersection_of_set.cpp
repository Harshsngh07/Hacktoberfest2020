//This program is to find the intersection of two sets by giving input 
//It is done my using array.

#include<bits/stdc++.h>
using namespace std;

void intersection(int [], int[], int , int);
int main()
{
    int m,n;
    int a[10], b[10];
    int flag = 0;
    cout<<"Intersection of sets\n";

    cout<<"Enter the length of setA: ";
    cin>>m;

    cout<<"Enter the length of setB: ";
    cin>>n;

    cout<<"Enter the objects of set A: ";
    for(int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter the objects of setB: ";
    for(int j = 0; j < n; j++)
    {
        cin>>b[j];
    }
    cout<<endl;

    cout<<"The elements of setA: ";
    for(int i = 0; i < m; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The elements of setB: ";
    for(int j = 0; j < n; j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl;
    intersection(a,b,m,n);
}

void intersection(int a[10],int b[10],int m,int n)
{
    int c[10],i,j,k = 0,flag = 0;
    for(int i = 0; i <m; i++)
    {
        flag = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
            if(flag == 1)
            {
                c[k] = a[i];
                k++;
            }
        }
        if(k == 0)
        {
            cout<<"No common elements!";
        }
        else{
                cout<<"Intersecting elements: ";
            for(int i = 0; i < k; i++)
            {
                cout<<c[i]<<" ";
            }
        }
    }
