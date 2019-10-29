import java.util.Scanner;
public class Prime
{
public static void main(String args[])
{
    boolean flag;
    Scanner sc=new Scanner(System.in);
    int num=sc.nextInt();
    flag=primeCheck(num);
    if(flag)
        System.out.print(num+" is prime number.");
    else
        System.out.print(num+" is not prime number.");
}
public static boolean primeCheck(int n)
{
    for(int i=1; i<n; i++)
        if(n%i==0)
            return false;
    return true;        
}
}
