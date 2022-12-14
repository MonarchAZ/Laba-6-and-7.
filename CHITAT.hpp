#pragma once

#include <iostream>
#include <fstream>

namespace mt
{
	void CHITAT(int data[100][100], int& n) //Занесение
	{
		std::ifstream in("input.txt");
		in >> n;
		while (!in.eof())
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					in >> data[i][j];
				}
			}
		}
		in.close();
	}
}
