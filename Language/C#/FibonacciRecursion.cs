// C# program for Fibonacci Series  
// using Recursion
// tiemonl
using System;
public class FibonacciRecursion
{
    public static void Main(string[] args)
    {
        Console.Write("Enter the number of elements: ");
        Console.WriteLine(Fib(int.Parse(Console.ReadLine())));
    }
    public static int Fib(int n)
    {
        // if n <= 1 return 1 otherwise recurse with
        // n - 1 and n - 2 until you get to where
        // n <= 1 while adding them up
        return n <= 1 ? n : Fib(n - 1) + Fib(n - 2);
    }
}
