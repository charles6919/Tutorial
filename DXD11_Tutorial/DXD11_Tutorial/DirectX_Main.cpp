#include "stdafx.h"
#include "ErrorLogger.h"

int APIENTRY wWinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	ErrorLogger::Log(E_INVALIDARG, "TEST");
	return 0;
}