/*
 *	Autor: Lockna
 *	This program should provide a simple buble sort implementation
 *	At the end it prints out all numbers, 
 *
*/

using System;

namespace BubbleSort {
    class Bubble {

        static void Main(string[] args) 
        {
            int[] arr = { 78, 55, 45, 98, 13};
            int temp;

            Console.WriteLine("Bubble Sort");
            Console.Write("Initial array is: ");


            // Prints the unchanged array
            foreach (int p in arr)
              Console.Write(p + " ")

            for (int j = 0; j <= arr.Length - 2; j++) 
            {
         
		            for (int i = 0; i <= arr.Length - 2; i++) 
		            {
                    if (arr[i] > arr[i + 1]) 
		                {
                        // If a number is bigger than the successor they get swaped.
                        temp = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp;
                    }
                }
            }

        Console.WriteLine("Sorted:");
        
        // Prints the sorted key
        foreach (int p in arr)
            Console.Write(p + " ");
         
        // Holds the console window on windows open, since it closes immediately after program end.
        Console.ReadKey();

      }
   }
}
