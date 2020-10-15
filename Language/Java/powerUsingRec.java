//Finds power of numbers using recurssion

import java.util.*;
public class Power 
{
    public static void main(String[] args)
    {
        Scanner ob = new Scanner(System.in);
        System.out.println("Eneter base number")
        int base=ob.nextInt();
        System.out.println("Eneter power to be raised")
        int powerRaised = ob.nextInt();
        int result = power(base, powerRaised);
        System.out.println(base + "^" + powerRaised + "=" +result);
    }

    int power(int base, int powerRaised)
    {
        if (powerRaised != 0)
            return (base * power(base, powerRaised - 1));
        else
            return 1;
    }
}
