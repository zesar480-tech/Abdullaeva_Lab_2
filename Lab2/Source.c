#include <locale.h>
#include <stdio.h>
int n1()

{
	setlocale(LC_CTYPE, "RUS");
printf("1\n2\n3\n");//2
printf("\t1\n\t\t2\n\t\t\t3\n");//3
printf("%2d\n%4d\n%6d\n",1,2,3);//4
printf("%10.5f\n", 12.234657);//6
printf("7 / 5 = %d\n", 7 / 5);//8
printf("2000 * 4 = %d\n", 2000 * 4);//9

//10
printf("%d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);

return 0;
}

int n2()
{
	setlocale(LC_CTYPE, "RUS");
	int N, K, S;
	N = 7;
	K = 45;
	S = 34;
	printf("Сейчас %d  часов % d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n",24 - N, 60 - K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("С 8.00 прошло %d секунд\n", S);
	printf("Текущий час  =  %2.2f суток и текущая минута = %2.2f часа\n", N / 24., K/60.);
	return 0;
}

int n3()
{
	int n = 3;
	int L = 333;
	double result = (double)n / L;
	printf("Дано:\n%8d\n%8d\n", n, L);
	printf("Ответ:\n%-+4.3f\n", result);
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	n1();
	n2();
	n3();

	
}