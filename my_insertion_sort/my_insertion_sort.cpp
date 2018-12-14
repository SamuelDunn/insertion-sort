/*
 Definitions for the functions used to implement my version of the insertoin
 sort algorithm.
*/

#include "my_insertion_sort.hpp"

void myInsertionSort(int *arrayToSort, int size) {
   int current;

   // We start at count = 1 because the first element is considered sorted
   for(int count = 1; count < size; count ++) {
      current = arrayToSort[count];
      if(current < arrayToSort[count - 1]) {
         int leftBound = 0;
         while(arrayToSort[leftBound] < current)
         {
            leftBound ++;
         }
         shiftElements(arrayToSort, leftBound, count);
         arrayToSort[leftBound] = current;
      }
   }
}

void shiftElements(int *array, int first, int end) {
   for(int count = end; count > first; count --) {
      array[count] = array[count - 1];
   }
}


