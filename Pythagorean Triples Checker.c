#include<stdio.h>
int main()
{
	float a, b, c;
	char ch='y';
	while ( ch== 'y'||ch=='Y')
	{
		printf("Enter the sides of a triangle:");
		scanf_s("%f%f%f", &a, &b, &c);
		if (a + b > c&& a + c > b&& c + b > a)
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				printf("The triangle is a Pythagorean Triple\n");
			else
				printf("The triangle is not a Pythagorean Triple\n");
		else
		{
			printf("This is not an triangle\n");
		}
		printf("Check anothor one?[Y/N]\n");
		getchar();
		ch = getchar();


	}
}