#pragma once

#include <iostream>

namespace mt
{
	int KVADRAT(int data[100][100], int stolbec, int poryadok)
	{
		int kvadrat = 0;
		for (int i = 0; i < poryadok; i++)
		{
			kvadrat += data[i][stolbec] * data[i][stolbec];
		}
		return kvadrat;
	}
}