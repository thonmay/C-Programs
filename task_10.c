#include<stdio.h>
#include<stdbool.h>

int main()
{
    /*10. Write out how many bytes your machine represents an `int`, `long int`,
   `unsigned int`, `unsigned long int`, `char`, `bool`, `float`, `double`,
   `long double` value. 11. Check if a number is
    */
    printf("Size of Int %lu Byte\n", sizeof(int));
    printf("Size of Long Int %lu Byte\n", sizeof(long));
    printf("Size of Unsinged Int %lu Byte\n", sizeof(unsigned int));
    printf("Size of Unsigned Long Int %lu Byte\n", sizeof(unsigned long int));
    printf("Size of Double %lu Byte\n", sizeof(double));
    printf("Size of Char %lu Byte\n", sizeof(char));
    printf("Size of Bool %lu Byte\n", sizeof(bool));
    printf("Size of Long Double %lu Byte\n", sizeof(long double));



}