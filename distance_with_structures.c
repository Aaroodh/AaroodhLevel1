//WAP to find the distance between two points using structures and 4 functions.

#include <stdio.h>
#include <math.h>

typedef struct point{
      float x,y; 
}point;

float cal(point p1,point p2)
{ 
    float d;
    d = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    return d;
}

point input()
{
    point p;
    printf("Enter abcissa\n");
    scanf("%f",&p.x);
    printf("Enter ordinate\n");
    scanf("%f",&p.y);
    return p;
}

void disp(point p1,point p2,float m)
{
    printf("The distance between %f %f and %f %f is Distance=%f",p1.x,p1.y,p2.x,p2.y,m);
}

int main()
{ point p1,p2;float dist;
    p1=input();
    p2=input();
    dist=cal(p1,p2);
    disp(p1,p2,dist);
    return 0;
}
