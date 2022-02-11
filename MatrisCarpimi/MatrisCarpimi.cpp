// MatrisCarpimi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define MAX 101

int main()
{
    int n1, m1, n2, m2,n3,m3;
    int mat1[MAX][MAX];
    int mat2[MAX][MAX];
    int carpim[MAX][MAX];

    //matris boyutunu alalım;
    cin >> n1 >> m1 >> n2 >> m2;
    //mat1 matrisini hemen alalım lütfen  a1
    cout << "Mat1 matrisini alalım mı? hadi devam:" << endl;
    for (int i = 0; i < n1; ++i)
    {
        for(int j=0;j<m1; ++j)
        { 
            cin >> mat1[i][j];

        }
    }

    cout << "Mat2 matrisini alalım mı? hadi devam:" << endl;
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m1; ++j)
        {
            cin >> mat2[i][j];

        }
    }
    cout << "Çarpa bilir miyiz kontrol edelim mi?" << endl;
    if (m1 != n2)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << "Islem yapilabilmektedir. HADI devam edelim.." << endl;
    }
    cout << "Hadi çarpımı hesaplayalım mı?" << endl;
    n3 = n1;
    m3 = m2;
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m2; ++j)
        {
            int tmp = 0;
            for (int k = 0; k < m1; ++k)
            {
                tmp += mat1[i][k] * mat2[k][j];
            }
            carpim[i][j] = tmp;
        }
    }
    //yaptığımz yeni matrisi yazdırıyoruz hadi çocukar. 
    cout << "Matrisi yazdıralım mı?" << endl;
    for (int i = 0; i < n3; ++i) {
        for (int j = 0; j < m3; ++j)
        {
            cout << carpim[i][j] << " ";
        }
        cout << endl;
    }

 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//2
//2
//2
//2
//Mat1 matrisini alal ? m m ? ? hadi devam :
//3
//4
//6
//7
//Mat2 matrisini alal ? m m ? ? hadi devam :
//2
//3
//4
//5
//╟arpa bilir miyiz kontrol edelim mi ?
//Islem yapilabilmektedir.HADI devam edelim..
//Hadi τarp ? m ? hesaplayal ? m m ? ?
//Matrisi yazd ? ral ? m m ? ?
//22 29
//40 53