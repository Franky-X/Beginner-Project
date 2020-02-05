#include<stdio.h>
#include <stdlib.h>
char gamer, computer;
void judge()
{
	switch (gamer)
	{
	case 'a':
		switch (computer)
		{
		case 0:printf("Tie\n"); break;
		case 1:printf("You win\n"); break;
		case 2:printf("You lose\n"); break;
		}break;
	case 'b':
		switch (computer)
		{
		case 0:printf("You lose\n"); break;
		case 1:printf("Tie\n"); break;
		case 2:printf("You win\n"); break;
		}break;
	case 'c':
		switch (computer)
		{
		case 0:printf("You win\n"); break;
		case 1:printf("You lose\n"); break;
		case 2:printf("Tie\n"); break;
		}break;	
	}
}

void msg()
{
	printf("Rock Paper Scissors Game\n");
	printf("a.Rovk\nb.Scissors\nc.Paper\nd.Quit\n");
	printf("Your choice:");
}

void computerinit()
{
	computer = rand() % 3;
		switch (computer)
		{
		case 0:printf("Computer's choice:Paper\n"); break;
		case 1:printf("Computer's choice:Scissors\n"); break;
		case 2:printf("Computer's choice:Paper\n"); break;
		}
}

void main()
{
	while (gamer != 'd')
	{
		msg();
		gamer = getchar();
		computerinit();
		judge();
		getchar();
	}
}
