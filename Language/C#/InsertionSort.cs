using System;

namespace InsertionSortDemo {

   class Example {

      static void Main(string[] args) {

         int[] arr = new int[10] { 23, 9, 85, 12, 99, 34, 60, 15, 100, 1 };
         int i, j, val, flag;

         Console.WriteLine("Insertion Sort");
         Console.Write("Initial array is: ");

         for (i = 0; i < arr.Length; i++) {
            Console.Write(arr[i] + " ");
         }

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
         for (i = 0; i < arr.Length; i++) {
            Console.Write(arr[i] + " ");
         }
      }
   }
}
