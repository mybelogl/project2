#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        string name = "ИМЯ";
        string age = "ВОЗРАСТ";
        string color = "ЦВЕТ";

        cout << "Привет!" << endl;
        cout << "Меня зовут " << name << endl;
        cout << "Мне " << age << " лет" << endl;
        cout << "Мой любимый цвет "<< color << endl;
        cout << "Хорошего дня!" << endl;
        cout << endl;
    }
}