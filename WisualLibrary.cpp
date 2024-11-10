#include "WisualLibrary.hpp"

void WisualLibrary::TextC(short tekst, short background) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, tekst + background * 16);
}

void WisualLibrary::CursorP(short pos_x, short pos_y) {
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