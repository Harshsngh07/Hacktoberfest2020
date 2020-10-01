/*
 *  Author: Lockna
 *  This is a simple Insertion Sort example. 
 *  It does it as most implementations of this sort.
 */



using System;

namespace InsertionSort {

   class Insertion {

      static void Main(string[] args) {

         int[] arr = new int[10] { 23, 9, 85, 12, 99, 34, 60, 15, 100, 1 };
         int i, j, val, flag;

         Console.WriteLine("Insertion Sort");
         Console.Write("Initial array is: ");

         // Prints the initial array
         foreach (int p in arr)
            Console.Write(p + " ")

         for (i = 1; i < arr.Length; i++) {
            val = arr[i];
            flag = 0;
            for (j = i - 1; j >= 0 && flag != 1; ) {
               if (val < arr[j]) {
                  arr[j + 1] = arr[j];
                  j--;
                  arr[j + 1] = val;
               }
               else flag = 1;
            }
         }

         Console.Write("\nSorted Array is: ");
         foreach (int p in arr)
            Console.Write(p + " ")
      }
   }
}
