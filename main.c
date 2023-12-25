#include<stdio.h>
#include<conio.h>
char marks[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//char alt[] = {'o',' ',' ',' ',' ',' ',' ',' ',' ',' '};
void board();

int checkwin();

int main()
{
	char turn;
	int player = 1, i, choice;
	do{
		board();
				
        player = (player % 2) ? 1 : 2;
        
		printf("\t\t\t\t\t    Player %d: Enter your Choice: ", player);
		scanf("%d", &choice);

		turn = (player == 1) ? 'X' : 'O';
		
		if(choice == 1 && marks[1] == '1')
		{
			marks[1] = turn;
		}
		else if(choice == 2 && marks[2] == '2')
		{
			marks[2] = turn;
		}
		else if(choice == 3 && marks[3] == '3')
		{
			marks[3] = turn;
		}
		else if(choice == 4 && marks[4] == '4')
		{
			marks[4] = turn;
		}
		else if(choice == 5 && marks[5] == '5')
		{
			marks[5] = turn;
		}
		else if(choice == 6 && marks[6] == '6')
		{
			marks[6] = turn;
		}
		else if(choice == 7 && marks[7] == '7')
		{
			marks[7] = turn;
		}
		else if(choice == 8 && marks[8] == '8')
		{
			marks[8] = turn;
		}
		else if(choice == 9 && marks[9] == '9')
		{
			marks[9] = turn;
		}
		else
		{
			printf("\t\t\t\t\t    Invalid move");
			getch();
			player--;
		}
				player++; 

		i = checkwin();
	}while(i == -1);

	board();
	
	if(i == 1)
	{
		printf("\t\t\t\t\t\t    Player %d Won!! ", --player);
	}
	else
	{
		printf("\t\t\t\t\t    Match Draw");
	}
	getch();
}
int checkwin()
{
	if(marks[1] == marks[2] && marks[2] == marks[3])
	{
		return 1;
	}
	else if(marks[4] == marks[5] && marks[5] == marks[6])
	{
		return 1;
	}
	else if(marks[7] == marks[8] && marks[8] == marks[9])
	{
		return 1;
	}
	else if(marks[1] == marks[4] && marks[4] == marks[7])
	{
		return 1;
	}
	else if(marks[2] == marks[5] && marks[5] == marks[8])
	{
		return 1;
	}
	else if(marks[3] == marks[6] && marks[6] == marks[9])
	{
		return 1;
	}
	else if(marks[1] == marks[5] && marks[5] == marks[9])
	{
		return 1;
	}
	else if(marks[3] == marks[5] && marks[5] == marks[7])
	{
		return 1;
	}
	else if(marks[1] != '1' && marks[2] != '2' && marks[3] != '3' && marks[4] != '4' && marks[5] != '5' && marks[6] != '6' && marks[7] != '7' && marks[8] != '8' && marks[9] != '9')
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}
void board()
{
	system("cls");
	printf("\t\t\t\t\t\t|X|_____________|X|\n");
	printf("\t\t\t\t\t\t|X| Tic Tac Toe |X|\n");
	printf("\t\t\t\t\t\t|X|_____________|X|\n\n");

	printf("\t\t\t\t\t\t      |     |     \n");
	printf("\t\t\t\t\t\t   %c  |  %c  |  %c  \n", marks[1], marks[2], marks[3]);
	printf("\t\t\t\t\t\t _____|_____|_____\n");
	printf("\t\t\t\t\t\t   %c  |  %c  |  %c  \n", marks[4], marks[5], marks[6]);
	printf("\t\t\t\t\t\t _____|_____|_____\n");
	printf("\t\t\t\t\t\t   %c  |  %c  |  %c  \n", marks[7], marks[8], marks[9]);
	printf("\t\t\t\t\t\t      |     |     \n\n");
}
