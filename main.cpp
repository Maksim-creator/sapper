#include <iostream>
#include <ctime>
#include<time.h>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int codeCol = 65;
    int bombCount = 1;
    int size;
    cout << "enter array-size"<< endl;
    cin >> size;
    char data[size][size];

    // Вывод верхней строки
    for(int j = 0; j < size; j++) {
        cout << "\t" << (char)codeCol;
        codeCol++;
        }
    // Вывод нижней строки
    for (int i = 0; i < size; i++) {
        cout << "\n\n" << i;
        for (int j = 0; j < size; j++) {
            cout << "\t_";
        }
    }
    // Создание пустого data
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            data[i][j] = ' ';
        }
    }

    // Заполнение бомбами
    for(int i = 0; i<bombCount ; i++) {
        int bombCol = rand()%size;
        int bombRow = rand()%size;
        if (data[bombCol][bombRow] == '#') {
            i--;
            continue;
        }
        data[bombCol][bombRow] = '#';
    }

    // Ввод координат
    char CoordCol;
    int CoordRow;
    cout << "\n";
    cin >> CoordCol;
    cin >> CoordRow;

    // Проверка на бомбы
    int CoordColNumber = (int)CoordCol - 65;
    if (data[CoordColNumber][CoordRow] == '#') {
        cout << "bomb";
    } else {
        cout << "no bomb";
    }

    }


