#include "Drawing.h"


LPCSTR Drawing::lpWindowName1 = "Menu";
LPCSTR Drawing::lpWindowName2 = "Overlay";
ImVec2 Drawing::vWindowSize = { 375, 120 };
ImGuiWindowFlags Drawing::WindowFlags = 0;
bool Drawing::bDraw = true;
bool Drawing::bShowMenu = true;
bool Drawing::bActiveOverlay = true;


bool Drawing::isActive()
{
	return bDraw == true;
}

void Drawing::DrawOverlay()
{
	float screen_width = GetSystemMetrics(SM_CXSCREEN);
	float screen_height = GetSystemMetrics(SM_CYSCREEN);

	ImGui::SetNextWindowPos(ImVec2(0, 0));
	ImGui::SetNextWindowSize({ screen_width, screen_height }, ImGuiCond_Once);
	ImGui::SetNextWindowBgAlpha(1.0f);

	ImGui::Begin(lpWindowName2, &bDraw, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration);

	ImGui::End();
}

void Drawing::DrawMenu()
{
	ImGui::SetNextWindowSize(vWindowSize, ImGuiCond_Once);
	ImGui::SetNextWindowBgAlpha(1.0f);

	ImGui::Begin(lpWindowName1, &bDraw, WindowFlags);
	{
		ImGui::Text("Blinker by xorhpp, reminds you of blinking");
		ImGui::SameLine();
		ImGui::Text("%.1f FPS", ImGui::GetIO().Framerate);

		ImGui::Separator();

		ImGui::Text("Press 'F2' for Show/Hide");
		ImGui::Text("Press 'F3' for Close");

		ImGui::Separator();

		ImGui::Checkbox("Enable Blink", &bActiveOverlay);
	}
	ImGui::End();		
	

	#ifdef _WINDLL
	if (GetAsyncKeyState(VK_INSERT) & 1)
		bDraw = !bDraw;
	#endif
}
