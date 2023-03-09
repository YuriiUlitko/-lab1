#include "Ship.h"

using namespace std;

int main()
{
    Ship a; //Створення об'єкту класу за допомогою конструктора за замовчуванням

    a.SetName("Titanyk");// Використання функцій Set()
	a.SetTonnage(1000);
	a.SetType("Steamer");

    cout << a.toString() << endl << endl;  //Вивід за допомогою методу to_string

    Ship b("Ship2", 500, "Disel ship");//Створення об'єкту класу за допомогою перегрузки конструктора

    cout << "Name: " + b.GetName() + "\nTonnage: " + to_string(b.GetTonnage()) + "\nType: " + b.GetType() << endl << endl;
   //Вивід за допомогою функцій Get()

    return 0;
}