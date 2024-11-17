#include "WisualLibrary.hpp"

void WisualLibrary::TextColor(short tekst, short background) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, tekst + background * 16);
}

void WisualLibrary::CursorPos(short pos_x, short pos_y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, { pos_x, pos_y });
}

void WisualLibrary::Rectangle(short length, short width, char wypelnienie) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < length; j++) {
			cout << wypelnienie;
		}
		cout << '\n';
	}
}

void WisualLibrary::Line(short length, char wypelnienie) {
	for (int i = 0; i < length; i++) {
		cout << wypelnienie;
	}
}

void WisualLibrary::CursorShow(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

COORD WisualLibrary::CursorPosGet(HANDLE hConsoleOutput)
{
	CONSOLE_SCREEN_BUFFER_INFO cbsi;
	if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
	{
		return cbsi.dwCursorPosition;
	}
	else
	{
		COORD invalid = { 0, 0 };
		return invalid;
	}
}
