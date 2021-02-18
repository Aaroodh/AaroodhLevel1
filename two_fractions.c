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
int gcd=1,i;

    sum.d=f1.d*f2.d;
    sum.n=f1.n*f2.d+f2.n*f1.d;
for(i=;i<=sum.n && i<=sum.d;i++)
{
	if((sum.n)%i==0 && (sum.d)%i==0)
gcd=i; 
}
sum.d=(sum.d)/gcd;
sum.n=sum.n/gcd;

}
    return sum;
    
}

void display(frac x,frac y,frac b)
{
    printf("sum of %d/%d and %d/%d is =%d/%d",x.n,x.d,y.n,y.d,b.n,b.d);
}

int main()
{ frac x,y,b;
    x=input();
    y=input();
    b=add(x,y);
    display(x,y,b);
    return 0;
}
