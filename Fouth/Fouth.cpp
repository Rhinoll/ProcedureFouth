// Fouth.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>;
#include <string>;
#include <sstream>;
#include <cmath>;
#include <algorithm>;

using namespace std;
const double pi = M_PI;

//Первое задание
/*
void createSum() {
    ofstream fileout;
    fileout.open("suma.txt");
    fileout << "0 1 2 3 4 5 6 7 8 9";
    fileout.close();


}


//Второе задание

int znak(int x) {
    if (x > 0) {
        return 1;
    }
    if (x == 0) {
        return 0;
    }
    else
        return -1;
}
*/
//Третье задание
/*
double pryam(double a, double b) {
    double pr = a * b;
    return(pr);
}
double treyg(double osn, double h) {
    double tr = osn * h;
    return(tr);
}
double krug(double r) {
    double kr = pi * pow(r, 2);
    return(kr);
}
*/
//Пятое задание
/*
double sinus(double x) {
    return sin(x);
}
*/

//Девятое задание
/*
double calc(int oldosn, int newosn, double chislo) {

}
*/

int main()
{
    setlocale(LC_ALL, "RUS");
    /*
    createSum();

    int x;
    cout << "Введите любое число, программа определит его знак: " << endl;
    cin >> x;
    cout << znak(x) << endl;

    double a, b;
    double osn, h;
    double r;
    cout << "Введите стороны a, b для поиска площади прямоугольника: " << endl;
    cin >> a >> b;
    cout << pryam(a, b) << endl;
    cout << "Введите основание и высоту треугольника для поиска его площади: " << endl;
    cin >> osn >> h;
    cout << treyg(osn, h) << endl;
    cout << "Введите радиус круга для поиска его площади: " << endl;
    cin >> r;
    cout << krug(r) << endl;*/
    
    double fir, sec, thir;
    fir = (5*1.2 + 2*2.8 + 10 * 2);
    sec = (3 * 1.2 + 5 * 2.8 + 2 * 5 + 5 * 2);
    thir = (20 * 1.2);
    cout << "Прибыль первого продавца равна: " << fir << endl;
    cout << "Прибыль второго продавца равна: " << sec << endl;
    cout << "Прибыль третьего продавца равна: " << thir << endl;
    cout << "Максимальная прибыль равна: " << max(max(fir, sec), thir);
    cout << "Минимальная прибыль "
    /*
    int oldosn, newosn;
    double chislo;
    cout << "Введите исходное число, основание его системы и основание новой системы: " << endl;
    cin >> chislo >> oldosn >> newosn;
    cout << "Число " << chislo << "в " << newosn << "равно" << calc(oldosn, newosn, chislo);*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
