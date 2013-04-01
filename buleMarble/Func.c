#include < stdio.h >
#include < stdlib.h >	// rand(), srand()
#include < conio.h >
#include < time.h >	// time()
#include < windows.h >

#include "Func.h"

char b_map[][];
void map()
{
	SetConsoleTitle( "DIce" );
	system( "mode con lines=10 cols=10" );
	system( "color 0E" );
	system( "cls" );
}
void Dice()
{
	char g_throw = '32';
	long seed;
	
	system("cls");

	seed = time(NULL);
	srand(seed);	
	
	getchar('32');
	
	for(i = 1 ; i <= 6 ; i++)
	{
		printf("%7d", (rand()%5) + 1)
		switch(rand()%5) + 1)
		{		
			case 1 :
				printf("旨收收收旬");
				printf("早      早");	
				printf("早  ≒  早");	
				printf("早      早");
				printf("曲收收收旭");	
				break;
			case 2 :
				printf("旨收收收旬");
				printf("早      早");	
				printf("早≒  ≒早");	
				printf("早      早");
				printf("曲收收收旭");	
				break;
			case 3 :
				printf("旨收收收旬");
				printf("早    ≒早");	
				printf("早  ≒  早");	
				printf("早≒    早");				
				printf("曲收收收旭");	
				break;
			case 4 :
				printf("旨收收收旬");
				printf("早≒  ≒早");	
				printf("早      早");	
				printf("早≒  ≒早");
				printf("曲收收收旭");	
				break;
			case 5 :
				printf("旨收收收旬");
				printf("早≒  ≒早");	
				printf("早  ≒  早");	
				printf("早≒  ≒早");
				printf("曲收收收旭");	
				break;
			case 6 :
				printf("旨收收收旬");	
				printf("早≒  ≒早");	
				printf("早≒  ≒早");	
				printf("早≒  ≒早");
				printf("曲收收收旭");	
				break;
		}
	}
	return 0;
}