//WAP to find the sum of n fractions.

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct fraction
{

  int n;

  int d;

} frac;

frac sum;

frac
input ()
{
  frac a;

  printf ("enter numerator\n");

  scanf ("%d", &a.n);

  printf ("enter denominator\n");

  scanf ("%d", &a.d);

  return a;

}


frac add (frac f1, frac f2)
{


  if (f1.d == f2.d)
    {

      sum.d = f1.d;

      sum.n = f1.n + f2.n;


    }

  else
    {




      sum.d = f1.d * f2.d;

      sum.n = f1.n * f2.d + f2.n * f1.d;

      sum.d = (sum.d) / gcd ();

      sum.n = sum.n / gcd ();


    }

  return sum;


}

int
gcd ()
{
  int gcd = 1, i;
  for (i = 2; i <= sum.n && i <= sum.d; i++)

    {

      if ((sum.n) % i == 0 && (sum.d) % i == 0)

	return gcd = i;

    }
}


int
main ()
{
  int n;
  printf ("enter the number of fractions\n");
  scanf ("%d", &n);
  frac c;
  int i;
 frac a[n];
  c.n = 0;
  c.d = 1;
  for (i = 0; i < n; i++)
    {
      printf ("for fraction %d\n", (i + 1));
    a[i] = input ();}

  for (i = 0; i < n; i++)
    {
    c = add (c, a[i]);
        
    }

  printf ("final sum of given %d fractions is = %d/%d", n, c.n, c.d);
     
     return 0;












}
