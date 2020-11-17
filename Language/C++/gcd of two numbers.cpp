This program is used to find the gcd of a number. We are using the logic of Euclid Division lemma.
  gcd(a,b) = gcd(b,a') where a'= a%b

#include<bits/stdc++.h>
using namespace std;

int gcd(int ,int);
int main()
{
  int a,b,res;
  a=8,b=3;
  res = gcd(a,b);
  cout<<res;
  return 0;
}
int gcd(int a,int b)
{
  if(b==0)
  return a;
  int a1=a%b;
  return gcd(b,a1);
}
