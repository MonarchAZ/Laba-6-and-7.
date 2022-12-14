#pragma once

#include <iostream>
#include <fstream>

namespace mt
{
	void VIVOD(int data[100][100], int& n)
	{
		std::ofstream out("ouput.txt");
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				out << data[i][j] << " ";
			}
			out << std::endl;
		}
		out.close();
	}
}