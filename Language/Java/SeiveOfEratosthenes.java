import java.io.*;
import java.util.*;
//Problem statement : 
//https://www.geeksforgeeks.org/sieve-of-eratosthenes/
//Other resources :
//https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
public class SeiveOfEratosthenes {
    // Time complexity : O(n*log(log(n)))
    static void seiveOfEratosthenes(int n) {
        int N = n + 1;
        ArrayList<Boolean> prime = new ArrayList<>();
        //initializing the array with 'true' value
        for(int i = 0; i < N; i++) {
            prime.add(i, true);
        }

        //marking the array with prime numbers in the range
        for(int i = 2; i * i <= n; i++) {
            if(prime.get(i)) {
                for(int j = i * i; j <= n; j += i) {
                    prime.add(j, false);
                }
            }
        }

        //printing the prime numbers
        for(int i = 2; i <= n; i++)
            if(prime.get(i))
                System.out.print(i+" ");
        System.out.println();
    }
    public static void main(String[] args) {
        seiveOfEratosthenes(30);
        seiveOfEratosthenes(150);
    }
}