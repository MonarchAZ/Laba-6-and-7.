#pragma once

#include <iostream>

namespace mt
{
	int MINIMUM(int data[100][100], int stolbec, int poryadok)
	{
		int min = data[0][stolbec];
		for (int i = 1; i < poryadok; i++)
		{
			if (min > data[i][stolbec])
			{
				min = data[i][stolbec];
			}
		}
		return min;
	}
}