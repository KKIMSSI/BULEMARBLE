#include < stdio.h >
#include < stdlib.h >	// rand(), srand()
#include < conio.h >
#include < time.h >	// time()
#include < windows.h >

#include "Func.h"
#include "util.h"

void map()
{
	SetConsoleTitle( "Dice" );
	system( "mode con lines=10 cols=10" );
	system( "color 0E" );
	system( "cls" );
}
void Dice()
{
	int i;	// 반복 5번
	int j;	// 반복 2번
	int N_dice[2];	
	
	
	long seed;
	
	system("cls");

	seed = time(NULL);
	srand(seed);	
	

	while(1)
	{	
		if( getch() == 32 )
		{
			N_dice[0] = ((rand()%6) + 1);
			N_dice[1] = ((rand()%6) + 1);
	
			for( i = 1 ; i <= 5 ; i++)
			{
				for( j = 1 ; j <= 2 ; j++ )
				{
					MoveCursor( 32+((j-1)*10), 10+(i-1) );	// 기적의함수
					Drawmap( i , N_dice[j-1]);
				}
				putchar('\n');
			}
		}	
	}
}

void Drawmap(int _i, int _raNum)
{			
	switch(_i)				
	{	
		case 1 :
			printf("┏━━━┓");				
			break;
		case 2 :
			switch( _raNum )
			{
				case 1 :
				case 2 : 
					printf("┃      ┃");	
					break;
				case 3 :
					printf("┃    ●┃");
					break;
				case 4 :
				case 5 :
				case 6 :
					printf("┃●  ●┃");
					break;	
			}
			break;
		case 3 :
			switch( _raNum )
			{
				case 1 :			
			        case 3 :
					printf("┃  ●  ┃");
					break;
				case 5 :
					printf("┃  ●  ┃");
					break;
				case 2 :
				case 6 :
					printf("┃●  ●┃");						
					break;
			        case 4 :
					printf("┃      ┃");
					break;
			}
			break;
		case 4 :
			switch( _raNum )
			{
				case 1 :
				case 2 :
					printf("┃      ┃");
					break;
				case 3 :
					printf("┃●    ┃");
					break;
				case 4 :
				case 5 :
				case 6 :
					printf("┃●  ●┃");	
					break;
			}
			break;
		case 5 :
			printf("┗━━━┛");	
			break;
	}
	
}