#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
  float f;
  clrscr();
p:
  printf("Enter any \'+\' no.:");
  scanf("%f", &f);
  if (f <= 0)
    goto p;
  else
    printf("the sqrt of %3.3f is %3.3f", f, sqrt(f));
  getch();
}