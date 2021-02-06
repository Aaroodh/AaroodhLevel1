//WAP to find the sum of two fractions.

#include <stdio.h>

typedef struct fraction{
    int n;
    int d;
} frac;

frac input()
{ frac a;
    printf("enter numerator\n");
    scanf("%d",&a.n);
     printf("enter denominator\n");
    scanf("%d",&a.d);
    return a;
}

frac add(frac f1,frac f2)
{   frac sum;
if(f1.d==f2.d){
    sum.d=f1.d;
    sum.n=f1.n+f2.n;
    
    }
else{
    sum.d=f1.d*f2.d;
    sum.n=f1.n*f2.d+f2.n*f1.d;
}
    return sum;
    
}

void display(frac b)
{
    printf("sum=%d/%d",b.n,b.d);
}

int main()
{ frac x,y,b;
    x=input();
    y=input();
    b=add(x,y);
    display(b);
    return 0;
}
