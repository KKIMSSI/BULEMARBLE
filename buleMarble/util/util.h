#ifndef _UTIL_H_
#define _UTIL_H_

void Initialize( char _title[], char _size[], char _color[] );
void MoveCursor( int _x, int _y );
void ColorChange( char _string[], char _variable[], int _color );
void Popup( char _message[] );

#endif //_UTIL_H_