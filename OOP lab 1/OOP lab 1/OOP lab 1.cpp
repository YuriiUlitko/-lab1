#include "Ship.h"

using namespace std;

int main()
{
    Ship a; //��������� ��'���� ����� �� ��������� ������������ �� �������������

    a.SetName("Titanyk");// ������������ ������� Set()
	a.SetTonnage(1000);
	a.SetType("Steamer");

    cout << a.toString() << endl << endl;  //���� �� ��������� ������ to_string

    Ship b("Ship2", 500, "Disel ship");//��������� ��'���� ����� �� ��������� ���������� ������������

    cout << "Name: " + b.GetName() + "\nTonnage: " + to_string(b.GetTonnage()) + "\nType: " + b.GetType() << endl << endl;
   //���� �� ��������� ������� Get()

    return 0;
}