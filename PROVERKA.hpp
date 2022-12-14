#pragma once

#include <iostream>

namespace mt
{
	bool PROVERKA(int proveryaemoe)
	{
		if (proveryaemoe <= 0)
		{
			return false;
		}
		while (proveryaemoe > 0)
		{
			int chislo = abs(proveryaemoe) % 10;
			if ((chislo == 3) || (chislo == 5))  //Содержание 3 и 5
			{
				return true;
				break;
			}
			proveryaemoe /= 10;
		}
	}
}