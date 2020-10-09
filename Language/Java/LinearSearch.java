//Linear Search
//Program To search an element in an array using Linear Search

import java.util.*;  
   
class LinearSearch {  
    public static void main(String args[]) {  
        int c, n, search, array[];  
   
        Scanner in = new Scanner(System.in);  
        System.out.println("Enter number of elements");  
        n = in.nextInt();   
        array = new int[n];  
   
        System.out.println("Enter those " + n + " elements");  
        //forloop to take input from the user
        for(c = 0; c < n; c++) {
            array[c] = in.nextInt();  
        }  
            
   
        System.out.println("Enter value to find");  
        search = in.nextInt();  
        //forloop to traverse through the array to find the element that satisfy the condition
        for (c = 0; c < n; c++) {  
            if (array[c] == search) {  
                System.out.println(search + " is present at location " + (c + 1));  
                break;  
            }  
        }  
    if(c == n) {
        System.out.println(search + " isn't present in array.");  
    }  
}  
} 
