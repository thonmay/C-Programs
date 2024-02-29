#include<stdio.h>

int main()
{


   int f= -20;
   
   while( f <= 200)
   {
    double c = (f - 32) / 1.8;
    printf("Fahrenheit %i\t Celsius %.2lf\n",  f, c);
    f +=10;
   }

}