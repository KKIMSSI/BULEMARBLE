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
				printf("����������");
				printf("��      ��");	
				printf("��  ��  ��");	
				printf("��      ��");
				printf("����������");	
				break;
			case 2 :
				printf("����������");
				printf("��      ��");	
				printf("����  �ܦ�");	
				printf("��      ��");
				printf("����������");	
				break;
			case 3 :
				printf("����������");
				printf("��    �ܦ�");	
				printf("��  ��  ��");	
				printf("����    ��");				
				printf("����������");	
				break;
			case 4 :
				printf("����������");
				printf("����  �ܦ�");	
				printf("��      ��");	
				printf("����  �ܦ�");
				printf("����������");	
				break;
			case 5 :
				printf("����������");
				printf("����  �ܦ�");	
				printf("��  ��  ��");	
				printf("����  �ܦ�");
				printf("����������");	
				break;
			case 6 :
				printf("����������");	
				printf("����  �ܦ�");	
				printf("����  �ܦ�");	
				printf("����  �ܦ�");
				printf("����������");	
				break;
		}
	}
	return 0;
}