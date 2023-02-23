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
 * @file stats.h 
 * @brief Header file of stats.c
 * This file contains the descriptions of the functions
 *
 * @author Pablo Saro   
 * @date 8/2/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
void main(); // Entry point of the program
void print_statistics(unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 */

void print_array(unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 */


unsigned char find_median (unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   Given an array of data and a length, returns the median value.
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */


unsigned char find_mean (unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   Given an array of data and a length, returns the mean.
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */


unsigned char find_maximum (unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   Given an array of data and a length, returns the maximum
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */


unsigned char find_minimum (unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   Given an array of data and a length, returns the minimum
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */

void sort_array(unsigned char *array, unsigned int n); 
/**
 * @brief 
 *   Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param array - A unsigned char pointer to an n-element data array
 * @param n - An unsigned integer as the size of the array
 */

#endif /* __STATS_H__ */
