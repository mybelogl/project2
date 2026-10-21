#include <iostream>
#include <string>
using namespace std;

int main()
{
        string name;
        string season;
        string color;

        cout << "введите ваше имя: ";
        cin >> name;

        cout << "введите ваше любимое время года: ";
        cin >> season;

        cout << "введите ваш любимый цвет: ";
        cin >> color;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Привет!" << endl;
        cout << "Меня зовут " << name << endl;
        cout << "Моё любимое время года это "<< season << endl;
        cout << "Мой любимый цвет "<< color << endl;
        cout << "Хорошего дня!" << endl;
        cout << endl;
    }
}