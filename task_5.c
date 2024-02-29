#include<stdio.h>


int main()
{

    //Print how many even and odd digits an integer number has. 4570 -> E 1 O 2

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int evenCnt = 0, oddCnt = 0;

    while( num > 0)
    {
        int lastDigit = num % 10;
        
        if(lastDigit % 2 == 0)
            evenCnt++;
        else
            oddCnt++;

        num = num / 10;
        
    }

    printf("%d Even digits & %d Odd digits\n", evenCnt, oddCnt);


}