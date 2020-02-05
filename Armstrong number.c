#include<stdio.h>
#include<math.h>
int judge(int a)
{	
	int s=0,n=0,i=0,j=0,b=a,c=a;
	while (a> 0)
	{
		n++;
		a = a / 10;
	}
	for (j = 0; j < n;j++)
	{
		s += pow(b%10, n);
		b = b / 10;
	}
	if(s==c)
		return 1;
	else
		return 0;
}

int main()
{	
	int a,j;
	printf("Enter a number:");
	scanf_s("%d", &a);
	j = judge(a);
	if (j == 1)
		printf("%d is an armstrong number.\n", a);
	else
		printf("%d is not an armstrong number.\n", a);
	return 0;

}