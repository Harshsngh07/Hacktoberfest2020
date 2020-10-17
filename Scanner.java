//Program to implement user input in java using scanner class

import java.util.Scanner;
class Student
{
public static void main(String args[])
{
Scanner sc= new Scanner(System.in);
System.out.println("Enter name');
String name = sc.nextLine();
System.out.println("Enter rollno');
int rollno = sc.nextInt();
System.out.println("Enter marks');
float marks = sc.nextFloat();
System.out.println("Name :" + name);
System.out.println("Roll No :" + rollno);
System.out.println("Marks :" + marks);
}
}


