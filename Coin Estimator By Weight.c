#include <stdio.h>
#define penny 2.5
#define nickle 5
#define dime 2.27
#define quarter	5.67
int main()
{	
	float p, n, d, q;
	int a, b, c, e;
	printf("Enter the weight of each type of your coins in grams:\n");
	printf("Penny:");
	scanf_s("%f", &p);
	printf("Nickles:");
	scanf_s("%f", &n);
	printf("Dimes:");
	scanf_s("%f", &d);
	printf("Quarters:");
	scanf_s("%f", &q);
	a = (int)(p / penny+0.5)/25;
	b = (int)(n / nickle+0.5)/25;
	c = (int)(d / dime+0.5)/25;
	e = (int)(q / quarter+0.5)/25;
	printf("\t   Coin Wrappers\n");
	printf("Pennies\tNickles\tDimes\tQuarters\n");
	printf("%d\t%d\t%d\t%d\n",a,b,c,e);
	return 0;
}