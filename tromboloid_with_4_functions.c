//WAP to find the volume of a tromboloid using 4 functions.

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float vol(float h,float b,float d)
{   float volume;  
   volume=((h*d*b)+d/b)/3.0;
   return volume;
}

float inp()
{ float h,b,d,o;
    printf("enter h ,b ,d \n");
    scanf("%f %f %f",&h,&b,&d);
    o=vol(h,b,d);
    return o;
   
}

void disp(float m)
{
    printf("volume=%f",m);
}



void main()
{ float m,n;
    m=inp();
    disp(m);
}
