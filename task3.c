#include<stdio.h>

int main()
{

    int num, result = 0;
    printf("Enter Number: ");
    scanf("%i", &num);

    int org = num;

    //loop through every digit of num
    while( num > 0)
    {
        //get the last digit
        int lastDigit = num % 10;
        //add it to the result 
        result = result * 10 + lastDigit;
        // remove the last digit
        num = num / 10;
    }
    
    printf("The reverse of number %i is %i\n", org, result);

    //Checking Palindrome
    if( org == result)
        printf("This is a palindrome number\n");
    else    
        printf("This number is NOT palindrom\n");

}