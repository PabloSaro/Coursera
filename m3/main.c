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

static int g1;
const int g2 = 45; //1532 PROBAR 1512
char g3 = 12; // 2432*
char g4 = 0;  // Probar 2332
extern char g5[N]; //  G5 -> 2432*

int main() //1712 -> main*
{
  register int l1; //2431 - 1131 PROBAR 1111
  int * l2; //2131
  volatile int l3 = 12; //2431
  
  l2 = (int *) malloc( N * g2 * sizeof(char) );

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

