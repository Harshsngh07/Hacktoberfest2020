  
// C# program for Fatorial
using System;
public class Fatorial
{
    public static void Main(string[] args)
    {
        Console.Write("Enter the factorial you want to find: ");
        Console.WriteLine(Fat(int.Parse(Console.ReadLine())));
    }
    public static int Fat(int a)
    {
        return a == 0 ? 1 : a*Fat(a-1);
    }
}