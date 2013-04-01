#include < stdio.h >
#include < stdlib.h >	// rand(), srand()
#include < conio.h >
#include < time.h >	// time()
#include < windows.h >

#include "Func.h"
#include "util.h"

void map()
{
	SetConsoleTitle( "DIce" );
	system( "mode con lines=10 cols=10" );
	system( "color 0E" );
	system( "cls" );
}
void Dice()
{
	int i;	// 輿餌嬪 偎熱渠煎馬
	int j;	// 楠渾戲煎 高擊邀
	char N_dice[];	//
	long seed;
	
	system("cls");

	seed = time(NULL);
	srand(seed);	
	
	getchar();

	while(1)
	{
		for( i = 1 ; i <= 5 ; i++)
		{
			for( j = 1 ; i <=  )
		N_dice = (rand()%6) + 1);
		switch()
		{		
		case 1 :
			printf("旨收收收旬\n");
			break;
		case 2 :
			printf("旨收收收旬\n");
			printf("早      早\n");	
			printf("早≒  ≒早\n");	
			printf("早      早\n");
			printf("曲收收收旭\n");	
			break;
		case 3 :
			printf("旨收收收旬\n");
			printf("早    ≒早\n");	
			printf("早  ≒  早\n");	
			printf("早≒    早\n");				
			printf("曲收收收旭\n");	
			break;
		case 4 :
			printf("旨收收收旬\n");
			printf("早≒  ≒早\n");	
			printf("早      早\n");	
			printf("早≒  ≒早\n");
			printf("曲收收收旭\n");	
			break;
		case 5 :
			printf("旨收收收旬\n");
			printf("早≒  ≒早\n");	
			printf("早  ≒  早\n");	
			printf("早≒  ≒早\n");
			printf("曲收收收旭\n");	
			break;
		case 6 :
			printf("旨收收收旬\n");	
			printf("早≒  ≒早\n");	
			printf("早≒  ≒早\n");	
			printf("早≒  ≒早\n");
			printf("曲收收收旭\n");	
			break;
		defualt :
			break;
		}
	
}