#include <iostream>
#include <windows.h>
using namespace std;

class WisualLibrary {
public:
	void TextColor(short tekst, short background);
	void CursorPos(short pos_x, short pos_y);
	void Rectangle(short length, short width, char wypelnienie);
	void Line(short length, char wypelnienie);
	void CursorShow(bool showFlag);
	COORD CursorPosGet(HANDLE hConsoleOutput);
};
