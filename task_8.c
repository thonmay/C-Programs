#include<stdio.h>

int main()
{

    //Write the real numbers from 0 to 1 in increments of 0.1.   
    double d = 0.0;

    for(double i = d; i < 1.0; i += 0.1)
    {
        printf("%.1lf\t", i );
    } 
}