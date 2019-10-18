#include<stdio.h>

int main(){
  printf("enter the no. of integers you eant to sort");
  scanf("%d",&n);
  in a[n];
//input for all the numbers
  for(i=0;i<n;++i){
      scanf("%d",&a[i]);
  }
//sorting starts
  for(i=0;i<n;++n){
      for(j=i+1;j<n;++j){
          if(a[j]<a[i]){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          }
      }
  }
//printing the array
  for(i=0;i<n;++i){
      scanf("%d",&a[i]);
  }

return 0;
}
