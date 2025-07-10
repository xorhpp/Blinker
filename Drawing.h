#ifndef DRAWING_H
#define DRAWING_H

#include "pch.h"
#include <chrono>
#include <fstream>
#include <string>
#include <tlhelp32.h>
#include <vector>
#include <windows.h>

class Drawing
{
private:
	static LPCSTR lpWindowName1;
	static LPCSTR lpWindowName2;
	static ImVec2 vWindowSize;
	static ImGuiWindowFlags WindowFlags;
	static bool bDraw;

public:
	static bool bShowMenu;
	static bool bActiveOverlay;
	static bool isActive();
	static void DrawMenu();
	static void DrawOverlay();
};


#endif
