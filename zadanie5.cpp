// zadanie5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "func.h"
using namespace std;
void Int2() {
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "введите первое число int: ";
    cin >> a;
    cout << "введите второе число int: ";
    cin >> b;
    cout << "Минимальное " << MinNumber(a, b) << endl;
}
void Int3() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "введите первое число int: ";
    cin >> a;
    cout << "введите второе число int: ";
    cin >> b;
    cout << "введите третье число int: ";
    cin >> c;
    cout << "Минимальное " << MinNumber(a, b, c) << endl;
}
void Float2() {
    setlocale(LC_ALL, "ru");
    float a, b;
    cout << "введите первое число float: ";
    cin >> a;
    cout << "введите второе число float: ";
    cin >> b;
    cout << "Минимальное " << MinNumber(a, b) << endl;
}
void Float3() {
    setlocale(LC_ALL, "ru");
    float a, b, c;
    cout << "введите первое число float: ";
    cin >> a;
    cout << "введите второе число float: ";
    cin >> b;
    cout << "введите третье число float: ";
    cin >> c;
    cout << "Минимальное " << MinNumber(a, b, c) << endl;
}
void Double3() {
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "введите первое число double: ";
    cin >> a;
    cout << "введите второе число double: ";
    cin >> b;
    cout << "введите третье число double: ";
    cin >> c;
    cout << "Минимальное " << MinNumber(a, b, c) << endl;
}
int main()
{
    setlocale(LC_ALL, "ru");
    int task;
    while (true)
    {
        printf("Введите какое задание хотите запустить\n1. 2 int\n2. 3 int\n3. 2 float\n4. 3 float\n4. 3 double\n");
        cin >> task;
        switch (task)
        {
        case 1: Int2();
            break;
        case 2: Int3();
            break;
        case 3: Float2();
            break;
        case 4: Float3();
            break;
        case 5: Double3();
            break;
        default:
            break;
        }
    }
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
