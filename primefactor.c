//prime factor of any number in C.

#include <stdio.h>

int main()
{
//variable
    int x, i, y, flag=0;
    
//Input number
    printf("Enter an integer \n");
    scanf("%d",&x);
    
//check the no. which will divide input number completely.
    for(i=2; i<=x; i++){
        flag=0;
        if(x%i==0){
        
//check whether that no. is divisible by any number or not.
            for(y=2; y<i; y++){
                if(i%y==0){
                    flag=1;
                    break;
                }
            }
            
//filter prime number
            if(flag==0){
                printf("%d, ",i);
            }

        }
    }
    return 0;
}
