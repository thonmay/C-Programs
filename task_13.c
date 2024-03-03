#include<stdio.h>
#include<stdbool.h>



bool isPrime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
        {
            return false;
        }
        else
            i++;
    }

    if( i == n)
        return true;
    else    
        return false;
}

int main()
{
    //13. Determine whether a given number is prime. Write the primes up to 1000.

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    //Checking for Prime
    if(isPrime(n))
        printf("%d is a Prime Number");
    else    
        printf("%d is NOT a Prime Number");




    //Printing Primes upto 1000
    for(int i = 2; i <= 1000; ++i)
    {
        if(isPrime(i))
        {
            printf("%d\n", i);
        }

    }

    
}









