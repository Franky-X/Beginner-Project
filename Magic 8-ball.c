#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int r;
	srand((unsigned int)time(NULL));
	printf("Enter your question:");
	getchar();
	while (getchar() != '\n');
	printf("processing\n");
	r = rand() % 20 + 1;
	switch (r)
	{
	case 1:printf("AS I SEE IT YES\n"); break;
	case 2:printf("ASK AGAIN LATER\n"); break;
	case 3:printf("BETTER NOT TELL YOU NOW\n"); break;
	case 4:printf("CANNOT PREDICT NOW\n"); break;
	case 5:printf("CONCENTRATE AND ASK AGAIN\n"); break;
	case 6:printf("DON'T COUNT ON IT\n"); break;
	case 7:printf("IT IS CERTAIN\n"); break;
	case 8:printf("IT IS DECIDEDLY SO\n"); break;
	case 9:printf("MOST LIKELY\n"); break;
	case 10:printf("MY SOURCES SAY NO\n"); break;
	case 11:printf("MY REPLY IS NO\n"); break;
	case 12:printf("OUTLOOK NOT SO GOOD\n"); break;
	case 13:printf("OUTLOOK GOOD\n"); break;
	case 14:printf("REPLY HAZY TRY AGAIN\n"); break;
	case 15:printf("SIGNS POINT TO YES\n"); break;
	case 16:printf("VERY DOUBTFUL\n"); break;
	case 17:printf("WITHOUT A DOUBT\n"); break;
	case 18:printf("YES\n"); break;
	case 19:printf("YES DEFINITELY\n"); break;
	case 20:printf("YOU MAY RELY ON IT\n"); break;
	};
}

int main()
{	
	char ch='y';
	while (ch=='y'|| ch=='Y')
	{
			game();
			printf("Another question?[Y/N]\n");
			ch = getchar();

	}

	printf("game over\n");
}