#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 99; i > 0; i--)
	{
		if (i > 1)
		{
			printf("%d bottles of beer on the wall,%d bottles of beer\nTake one down and pass it around,%d bottles of beer on the wall.\n", i, i, i - 1);
			printf("\n");
		}
		else
		{
			printf("%d bottle of beer on the wall,%d bottle of beer.\nTake one down and pass it around,no more bottles of beer on the wall.", i, i);
		}
	}
	printf("\n\nNo more bottles of the beer on the wall,no more bottles of beer.\nGo to the store and buy some more,99 bottles of beer on the wall.\n");
	return 0;
}