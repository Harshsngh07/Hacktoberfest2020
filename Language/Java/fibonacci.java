import java.util.Scanner;

// Java program that calculates the nth number in the Fibonacci sequence
class fibonacci {

  public static void main(String[] args){


    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num = sc.nextInt();
    num = fib(num);
    System.out.println("\nThe Fibonacci number for your input is " + num);
  }


  public static int fib(int n){
    if (n <= 1)
      return 1;
    return fib(n-2) + fib(n-1);
  }

}
