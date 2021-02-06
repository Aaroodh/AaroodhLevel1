//WAP to find the distance between two point using 4 functions.

#include <stdio.h>
#include <math.h>


float cal(float x1,float x2,float y1,float y2)
{ float d;
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}

float input()
{
     float x1,y1,x2,y2,d;
    printf("Enter coordinates of point1\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of point2\n");
    scanf("%f%f",&x2,&y2);
    d=cal(x1,x2,y1,y2);
    return d;
    
    
}



void disp(float m)
{
    printf("Distance=%f",m);
}

int main()
{ float a,b;
    a=input();
    disp(a);
}
