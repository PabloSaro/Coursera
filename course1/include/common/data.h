#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
#include <stddef.h>



/**
 * @brief convert data from a standard integer type into an ASCII string. 
 *
 * @param data Data to convert
 * @param ptr pointer ao set value
 * @param base base
 *
 * @return void.
 */


uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);






/**
 * @brief convert data from a standard integer type into an ASCII string. 
 *
 * @param data Data to convert
 * @param ptr pointer ao set value
 * @param base base
 *
 * @return void.
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif