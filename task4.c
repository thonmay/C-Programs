#include<stdio.h>

int main()
{
    //Calculate the product of an integer's digits.

    printf("Enter number: ");
    int num;
    scanf("%d", &num);
    
    int org = num, result = 1;

    while( num > 0)
    {
        int lastDigit = num % 10;
        result = result * lastDigit;
        num = num / 10;
    }

    printf("product of digits %i is %i \n", org, result);
    



}