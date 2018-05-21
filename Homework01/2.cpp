#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

{

int x = 0, y = 0;
printf("x= \t");
scanf("%d", &x);

y = x - 3;
x = y*y*y;
y = 4 * x*x - 7 * x + 2;

printf("y=%d /n", y);

}