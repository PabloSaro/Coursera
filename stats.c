/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c & stats.h Modificatio  
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Pablo Saro Buendia
 * @date 8/2/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test,SIZE);
  print_array(test, SIZE);
  print_statistics (test, SIZE);
}

/* Add other Implementation File Code Here */



void print_array(unsigned char *array, unsigned int n){
  for(int i =0; i < n ;i++){
    printf("Index: %i, value: %u \n", i,(unsigned int) array[i]);
  }
} 

unsigned char find_median (unsigned char *array, unsigned int n){
  unsigned char median;
  if (n % 2 == 0) {
    median = (array[n / 2 - 1] + array[n / 2]) / 2;
  }
  else {
    median = array[n / 2];
  }
  return median;
}


unsigned char find_mean (unsigned char *array, unsigned int n) {
  int mean = 0;   
  for(int i =0; i < n ;i++){
    mean += array[i];
  }
  return (unsigned char)(mean/n);
}

void swap(unsigned char *p,unsigned char *q) {
   int t;
   t=*p; 
   *p=*q; 
   *q=t;
}


void sort_array(unsigned char *array, unsigned int n){ 
   int i,j;
   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(array[j] < array[j+1])
            swap(&array[j],&array[j+1]);
      }
   }
}

unsigned char find_minimum (unsigned char *array, unsigned int n){
    unsigned char min = array[0];
  
  for (int i = 1; i < n; i++) 
  {
      if (array[i] < min) 
      {
          min = array[i];
      }
  }
  
  return min;
}



unsigned char find_maximun (unsigned char *array, unsigned int n){
    unsigned char max = array[0];
  
  for (int i = 1; i < n; i++) 
  {
      if (array[i] > max) 
      {
          max = array[i];
      }
  }
  return max;
}



 void print_statistics(unsigned char *array, unsigned int n){
  printf("Minimun is: %u \n", (unsigned int) find_minimum (array,n));
  printf("Maximun is: %u \n", (unsigned int) find_maximun (array,n));
  printf("Mean is: %u \n", (unsigned int) find_mean (array,n));
  printf("Median is: %u \n", (unsigned int) find_median (array,n));
 }