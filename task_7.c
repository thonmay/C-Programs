#include<stdio.h>

int main()
{

    //Write out a 10x10 times table. Separate the numbers in a line with tab characters.

    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            printf("%d\t", 1);
        }
        printf("\n");
    }

}