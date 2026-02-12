#include<Windows.h>
#include"resource.h"

BOOL CALLBACK DlgProc(HWND hund, UINT uMsg, WPARAM wParam, LPARAM lParam);

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, INT nCmdShow)
{
	DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc, 0);
	return 0;
}


BOOL CALLBACK DlgProc(HWND hund, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case IDOK:
			MessageBox(hund, "Была нажата кнопка ok", "Info'", MB_OK | MB_ICONINFORMATION);
		}
	case WM_CLOSE:
		EndDialog(hund, 0);
	}
	return FALSE;
}