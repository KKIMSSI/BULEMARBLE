#include< stdio.h >
#include< conio.h >
#include< windows.h >

#include "util.h"

void Initialize( char _title[], char _size[], char _color[] )
{
	SetConsoleTitle( _title );
	system( _size );
	system( _color );
	system( "cls" );
}
void MoveCursor( int _x, int _y )
{
	COORD m_position = { _x-1, _y-1 };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), m_position );
}
void ColorChange( char _string[], char _variable[], int _color )
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), _color );
	printf( _string, _variable );
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14 );
}
void Popup( char _message[] )
{	
	char r_name[10];
	//system( "cls" );
	MoveCursor( 10, 7 );
	printf( "┏━━━━━━━━━┓\n" );
	MoveCursor( 10, 8 );
	printf( "┃ ");
	printf( _message );
	printf( " ┃\n" );
	MoveCursor( 10, 9 );
	printf( "┗━━━━━━━━━┛\n" );

	MoveCursor( 0, 16 );
	getch();
}