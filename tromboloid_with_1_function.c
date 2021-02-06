#include <stdio.h>

int main()
{
    float h,d,b,vol;
    printf("enter h ,b ,d");
    scanf("%f %f %f",&h,&b,&d);
    vol=(0.33)*((h*d*b)+d/b);
    printf("volume=%f",vol);
    

    return 0;
}
