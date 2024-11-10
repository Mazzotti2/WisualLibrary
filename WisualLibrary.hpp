#include <iostream>
#include <windows.h>
using namespace std;

class WisualLibrary {
public:
	void TextC(short tekst, short background);
	void CursorP(short pos_x, short pos_y);
	void Rectangle(short length, short width, char wypelnienie);
	void Line(short length, char wypelnienie);
};