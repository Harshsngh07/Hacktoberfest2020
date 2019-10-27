//This is an example of simple calculator using switch function

//Importing header files with functions we are using
#include<stdio.h>

int main()
{
  //Code starts here
  //Creating variables
  int a, b, ch;

  //Taking number as input from user
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);

  printf("What do you want to perform:\nEnter 1 for Addition\nEnter 2 for Substraction\nEnter 3 for Multiplication\nEnter 4 for Division\n");
  scanf("%d",&ch);

  //Switch function
  switch(ch)
  {
    case:1
    printf("Result:-%d\n",a+b);
    //Calling recall function
    recall();
    break;

    case:2
    printf("Result:-%d\n",a-b);
    recall();
    break;

    case:3
    printf("Result:-%d\n",a*b);
    recall();
    break;

    case:4
    printf("Result:-%d\n",a/b);
    recall();
    break;

    default:
    printf("INVALID CHOICE! TRY AGAIN..");
    //Again exuction main function
    main();
  }

  return 0;
}

//Defining recall function
void recall()
{
  int i=2;

  printf("Due want to calculate again:\nEnter 1 for YES\nEnter 2 for NO\n");
  scanf("%d",&i);

  if(i==1)
  {
    main();
  }
  else if(i!=1 && i!=2)
  {
    printf("SOMETHING WENT WRONG!!");
  }
}
