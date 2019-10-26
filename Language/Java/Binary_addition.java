import java.util.Scanner;
public class Binary_addition
{
public static void main(String args[])
{
Scanner sc =new Scanner(System.in);
int b,d,a=0,c=0,temp,result;
String final_result="";
System.out.print("Enter first number :  ");
int num1 = sc.nextInt();
System.out.print("Enter second number : ");
int num2 = sc.nextInt();
while(num1>0 || num2>0 || a!=0)
{
b= num1%10;
d= num2%10;
temp= add(a,b);
if(temp==10)
{
c=0;
a=1;
}
else
{
c=temp;
a=0;
}
temp = add(c,d);
if(temp==10)
{
result=0;
a=1;
}
else
result = temp;
num1=num1/10;
num2=num2/10;
final_result = result+final_result;
}
System.out.println("Result is :           " + final_result);
}
public static int add(int x, int y)
{
if(x==1 && y==1)
return 10;
if(x==0 && y==1)
return 1;
if(x==1 && y==0)
return 1;
if(x==0 && y==0)
return 0;
return 0;
}
}
