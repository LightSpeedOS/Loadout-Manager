#pragma once

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>


using namespace std;

inline void clear()
{
	system("CLS");
}

inline void pause()
{
	this_thread::sleep_for(chrono::seconds(2));
	clear();
}

inline void space()
{
	cout << endl;
}

inline void getKey()
{
	space();
	cout << "[!] Press any key to return." << endl;
	_getch();
}

inline void invalid()
{
	clear();
	cout << "[!] Invalid Option" << endl;
	pause();
}

inline bool input()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "[!] Invalid Input" << endl;
		pause();
		return true;
	}
	return false;
}

inline void shutDown()
{
	cout << "Shutting Down";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	exit(0);
}

inline void initConsole()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hConsole, &mode);
	SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}


// -- Text colours --
inline const char* black = "\033[30m";
inline const char* red = "\033[31m";
inline const char* green = "\033[32m";
inline const char* yellow = "\033[33m";
inline const char* blue = "\033[34m";
inline const char* magenta = "\033[35m";
inline const char* cyan = "\033[36m";
inline const char* white = "\033[37m";
inline const char* grey = "\033[90m";
inline const char* gold = "\033[93m";
inline const char* silver = "\033[38;5;245m";
inline const char* bronze = "\033[33m";

// -- Bright versions --
inline const char* brightRed = "\033[91m";
inline const char* brightGreen = "\033[92m";
inline const char* brightYellow = "\033[93m";
inline const char* brightBlue = "\033[94m";
inline const char* brightMagenta = "\033[95m";
inline const char* brightCyan = "\033[96m";
inline const char* bloodRed = "\033[38;2;136;8;8m";
inline const char* playerColour = "\033[38;2;133;133;173m";
inline const char* brightWhite = "\033[97m";

// -- Styles --
inline const char* bold = "\033[1m";
inline const char* underline = "\033[4m";
inline const char* reset = "\033[0m";