//Write a program to add two user input numbers using 4 functions.

#include <stdio.h>

int add(x,y)
{ int sum;
sum=x+y;
return sum;
}

int input()
{ int x,y,o;
    printf(" enter x ,y \n");
    scanf("%d %d",&x,&y);
    o=add(x,y);
    return o;
    
}

int disp(m)
{
    printf("Sum=%d \n",m);
}
int main()
{ int m,n;
    m=input();
    disp(m);
}

