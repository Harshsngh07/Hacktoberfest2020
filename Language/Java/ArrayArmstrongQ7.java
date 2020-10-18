// to check armstrong for each element of array
import java.util.*;
import java.lang.*;
class ArrayArmstrongQ7{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter length of array: ");
        int n = sc.nextInt(),number,sum= 0,cube,remainder;
        System.out.println("enter data in array");
        int []a = new int[n];
        for (int i =0 ; i<a.length ; i++){
            a[i] = sc.nextInt();
        }
        System.out.println("armstrong numbers are : ");
        for ( int i =0 ; i<a.length;i++){
            number = a[i];
            while(number > 0){
                remainder = number %10;
                cube = (int)Math.pow(remainder,3);
                sum += cube;
                number /=10;
            }
            if(sum == a[i])
                System.out.print(a[i]+"  ");
            sum =0;
        }
    }
}