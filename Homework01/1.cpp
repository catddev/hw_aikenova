#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("введите номер задачи:\t");
	scanf("%d", &n);

	if (n == 1)

	{
		/*Найти значение функции y = 3x^6 - 6x^2 -7 при данном значении x*/

		int x = 0, y = 0;
		printf("x=");
		scanf("%d", &x);

		y = x*x;
		x = y*x;
		y = 3 * x*x - 6 * y - 7;

		printf("y=%d \n", y);
	}
	

	/*int TF = 0, TC = 0;
	printf("TF= \t");
	scanf("%d", &TF);

	TC = (TF - 32) * 5 / 9;
	printf("TC=%d\t", TC);






	int A = 0, x = 0, y = 0;
	printf("A= \t");
	scanf("%d", &A);

	x = A*A;
	printf("%d \n", x);

	y = x*A;
	printf("%d \n", y);

	x = x*y;
	printf("%d \n", x);

	y = x*x;
	printf("%d \n", y);

	x = x*y;
	printf("%d \n", x);





	int A = 0, B = 0;
	printf("A= \t");
	scanf("%d", &A);

	B = A*A;
	printf("%d \n", B);

	A = B*B;
	printf("%d \n", A);

	B = A*A;
	printf("%d \n", B);
	






	int x = 0, y = 0;
	printf("x= \t");
	scanf("%d", &x);

	y = x - 3;
	x = y*y*y;
	y = 4 * x*x - 7 * x + 2;

	printf("y=%d /n", y);

*/








}