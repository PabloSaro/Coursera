#include "data.h"











uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){

    //check for valid base
    if(base < 2 || base > 16){
        return 0;
    }

    //check for valid pointer
    if(ptr == NULL){
        return 0;
    }

    uint8_t *start_ptr = ptr; //store start pointer
    int32_t negative_num = 0; //boolean flag for negative numbers
    int32_t num = data; //store data for manipulation
    uint8_t remainder;

    //if data is negative number
    if(data < 0){
        negative_num = 1;
        num *= -1; //make num positive
    }

    //convert number to base
    while(num > 0){
        remainder = num % base; //get remainder
        num /= base; //divide by base
        //check if remainder is greater than 9
        if(remainder > 9){
            //if so, add 55 to ASCII value
            *ptr = remainder + 55;
        }
        else{
            //else add 48 to ASCII value
            *ptr = remainder + 48;
        }
        ptr++; //increment pointer
    }

    //if number is negative, add '-' to string
    if(negative_num){
        *ptr = '-';
        ptr++;
    }

    //terminate the string
    *ptr = '\0';

    //reverse string
    ptr--; //point to last character in string
    uint8_t temp;
    while(ptr > start_ptr){
        temp = *ptr;
        *ptr = *start_ptr;
        *start_ptr = temp;
        start_ptr++;
        ptr--;
    }

    //return length of string
    return (ptr - start_ptr) + 1;
}


int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base) {
    int32_t result = 0;
    int8_t sign = 1;
    uint8_t* end = ptr + digits;
    uint8_t val;

    // Check for sign
    if(*ptr == '-') {
        sign = -1;
        ptr++;
    }

    while(ptr < end) {
        val = *ptr;

        // Convert lowercase to uppercase
        if(val >= 'a' && val <= 'f') {
            val -= ('a' - 'A');
        }

        // Convert ASCII to integer
        if(val >= '0' && val <= '9') {
            val -= '0';
        } else if(val >= 'A' && val <= 'F') {
            val -= ('A' - 10);
        } else {
            // Not a valid character
            return 0;
        }

        // Validate character is within base
        if(val >= base) {
            return 0;
        }

        result = (result * base) + val;
        ptr++;
    }

    return result * sign;
}