using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;

namespace BogoSort
{
    class _BogoSort
    {
        static void Main(string[] args)
        {
            //  Data Sets for testing
            //int[] arr     = new int[]     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };   //Pre sorted array
            //int[] arr     = new int[]     { 5, 7, 8, 4, 3, 2, 9, 1, 10 };      //Random medium array
            //float[] arr   = new float[]   { 5.2f, 5.1f, 8.0f, 14.1f };         //Float array
            int[] arr = new int[] { 5, 3, 8, 14 };
            
            BogoSort(arr);
        }

        public static void BogoSort<T>(T[] obj)
        {
            //  The random number generator, 
            //  using this, each iteration of the while loop shuffles an element of the array
            //  Before shuffling, and then each subsequent shuffle, there's a check to see if
            //  the array has been sorted.
            Random r = new Random();
            T[] li = obj;
            
            while (!checkSorted<T>(obj))
            {
                //stored.AddRange(li);

                for (int i = 0; i < obj.Length; i++)
                {
                    int value = r.Next(i, li.Length);
                    var valHolder = li[i];
                    li[i] = li[value];
                    li[value] = valHolder;
                }


                foreach (T i in obj)
                {
                    Console.Write("{0},", i);
                }
               
            }
            
        }


        //  The below function works by iterating through the array, if each check on the previous element iss less than or equal to
        //  The value will remain true.  If an element is not less than or equal to the one in the previous row, it will then return as
        //  'Not sorted'. (false).
        static bool checkSorted<T>(T[] obj)
        {
            bool sorted = true;

          
            for(int i = 0; i < obj.Length -1; i++)
            {
               
                T t1 = obj[i];
                T t2 = obj[(i + 1)];


               
                if (Comparer<T>.Default.Compare(t1, t2) <= 0)
                {
                    //do nothing
                }
                else
                {
                    sorted = false;
                }

                
            }
            Console.WriteLine("  Sorted: {0}", sorted);
            return sorted;
        }

    }

}

