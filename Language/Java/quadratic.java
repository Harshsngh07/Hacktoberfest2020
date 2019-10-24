import java.util.Scanner;
public class quadratic
{
public static void main(String args[])
{
int a,b,c,k; double d,root1,root2;
Scanner sc=new Scanner(System.in);
System.out.println("enter the values of a,b & c");
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
d=calculation.squareRoot((b*b)-(4*a*c));
System.out.println("d= "+d);
root1= (-b+d)/(2*a);
root2= (-b-d)/(2*a);
System.out.println("root1= "+root1);
System.out.println("root2= "+root2);
}
}
