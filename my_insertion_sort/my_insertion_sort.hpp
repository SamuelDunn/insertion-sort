/*
 This file contains the declarations for the functions used to impliment the
 insertion sort algorithm.

 void myInsertionSort(int *arrayToSort, int size);
 takes a plain old array of type int and sorts its elements in ascending order.
 It also takes a "size" parameter that indicates the size of the input array.

 void shiftElements(int *array, int first, int end);
 Is a helper function that shifts the elements in some range withing an array.
 */

#ifndef my_insertion_sort_hpp
#define my_insertion_sort_hpp

void myInsertionSort(int *arrayToSort, int size);
void shiftElements(int *array, int first, int end);

#endif
