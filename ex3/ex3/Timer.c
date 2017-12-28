#include <windows.h>
#include "Timer.h"

DWORD WINAPI Timer(LPVOID lpParam)
{
	DWORD *T_D;

	if (NULL == lpParam)
	{
		return TIMER_THREAD__CODE_NULL_PTR;
	}

	T_D = (DWORD *)lpParam;

	Sleep(T_D);

	TimeIsUp = TRUE;

	return TIMER_THREAD__CODE_SUCCESS;

}

