#include <iostream>
#include "CHITAT.hpp"
#include "VIVOD.hpp"
#include "KVADRAT.hpp"
#include "PROVERKA.hpp"
#include "MINIMUM.hpp"

int main()
{
    setlocale(LC_ALL, "ru");
    //Объявление нужных переменных
    int min = 9999999;
    int matrix[100][100];
    int n;
    mt::CHITAT(matrix, n);
    int minimalki[100];
    int kvadratiki[100];
    bool vneshproverka = true;

    //Условие с главной диагональю (из левого верхнего угла к правому нижнему)
    for (int i = 0; i < n; i++)
    {
        int element_glav = matrix[i][i];
        bool proverka1 = false;
        proverka1 = mt::PROVERKA(element_glav);
        if (!proverka1)
        {
            std::cout << "Переделывай главную диагональ";
            return 0;
        }
    }
    
    //Условие с побочной диагональю (из правого верхнего угла к левому нижнему)
    for (int i = 0; i < n; i++)
    {
        int element_pob = matrix[i][n - i - 1];
        bool proverka2 = false;
        proverka2 = mt::PROVERKA(element_pob);
        if (!proverka2)
        {
            std::cout << "Переделывай побочную диагональ";
            return 0;
        }
    }
    std::cout << "Ура!!!";

    //Минимум в столбце
    for (int j = 0; j < n; j++)
    {
        minimalki[j] = mt::MINIMUM(matrix, j, n);
        kvadratiki[j] = mt::KVADRAT(matrix, j, n);
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == minimalki[j])
            {
                matrix[i][j] = kvadratiki[j];
            }
        }
    }
    mt::VIVOD(matrix, n);
}