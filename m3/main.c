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
 * @file main.c
 * @brief This file is to be used for the c1m3 assessment.
 *
 * This file provides various memory allocations. The learner will need
 * to analyze the code's memory footprint for this assessment.
 *
 * @author Alex Fosdick
 * @date April 2, 2017
 *
 */
#include <stdint.h>
#include <stdlib.h>
#include "misc.h"

static int g1; //2332*
const int g2 = 45; //1512 *
char g3 = 12; // 2432*
char g4 = 0;  // 2332*
extern char g5[N]; //  G5 -> 2432* N-> 2432 -- 2132 -- 2412 - 1712 --2732--2332

int main() //1712 -> main*
{
  register int l1; //2431 - 2131 -- 2111 -- 2431-- 2231-- 1512--
  int * l2; //2131*
  volatile int l3 = 12; //2131*
  
  l2 = (int *) malloc( N * g2 * sizeof(char) );//2433 --- 2233*
  if ( ! l2 )
  {
    return -1;
  }

  for( l1 = 0; l1 < g2; l3++)
  {
    g1 = func(l2);
  }

  return 0;
}

