//This program illustrates the dynamic allocaion of memory using malloc function
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main(){
    int *ptr;
    int  n=5;
    ptr=(int*)malloc(5*sizeof(int));
    if(ptr== NULL){
        printf("Memory allocation failed");
        return 0;
    }
    else{
     for(int i=0;i<n;i++){
        ptr[i]=i+1;
     }
    }
    for(int i=0;i<n;i++){
     printf("%d ",ptr[i]);
     }


    return 0;

}
