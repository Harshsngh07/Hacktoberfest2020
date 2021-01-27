// C# program to determine is a prime number or not
using System;

public class IsPrime
{
    public static void Main(string[] args)
    {
        Console.Write("Enter a number you want to find out: ");
        Console.WriteLine(IsPrime(Convert.ToInt32(Console.ReadLine())) ? "Yes" : "No");
    }

    public static bool IsPrime(int x)
    {
        if (x == 2) return true;
        if (x < 2 || x % 2 == 0) return false;
        for (int i = 3; i <= Math.Sqrt(x); i += 2)
        {
            if (x % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}
