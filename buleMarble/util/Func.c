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
	int i;	// �ֻ��� ������ΰ�
	int j;	// �������� ������
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
			printf("����������\n");
			break;
		case 2 :
			printf("����������\n");
			printf("��      ��\n");	
			printf("����  �ܦ�\n");	
			printf("��      ��\n");
			printf("����������\n");	
			break;
		case 3 :
			printf("����������\n");
			printf("��    �ܦ�\n");	
			printf("��  ��  ��\n");	
			printf("����    ��\n");				
			printf("����������\n");	
			break;
		case 4 :
			printf("����������\n");
			printf("����  �ܦ�\n");	
			printf("��      ��\n");	
			printf("����  �ܦ�\n");
			printf("����������\n");	
			break;
		case 5 :
			printf("����������\n");
			printf("����  �ܦ�\n");	
			printf("��  ��  ��\n");	
			printf("����  �ܦ�\n");
			printf("����������\n");	
			break;
		case 6 :
			printf("����������\n");	
			printf("����  �ܦ�\n");	
			printf("����  �ܦ�\n");	
			printf("����  �ܦ�\n");
			printf("����������\n");	
			break;
		defualt :
			break;
		}
	
}