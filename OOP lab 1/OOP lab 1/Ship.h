#pragma once
#include <string>
#include <iostream>
#include "Ship.cpp"
using namespace std;

class Ship
{
	string name;
	int tonnage; 
	string type; 
public:
	Ship()
	{
		cout<<"Constructor is enabled" << endl; //Вивід інформації про використання конструктора
	}
	
	Ship(string name)
	{
		this->name = name;
		cout << "Constructor is enabled" << endl;
	}
	
	Ship(string name, int tonnage)
	{
		this->name = name;
		this->tonnage = tonnage;
		cout << "Constructor is enabled" << endl;
	}
	
	Ship(string name, int tonnage, string type)
	{
		this->name = name;
		this->tonnage = tonnage;
		this->type = type; 
		cout << "Constructor is enabled" << endl;
	}
	
	~Ship()
	{
		cout << "Destructor is enabled" << endl; //Вивід інформації про використання деструктора
	}
	string toString()
	{
		return "Name: "+ name + "\nTonnage: " + to_string(tonnage) + "\nType: " + type;
	}

	string GetName()
	{
		return name;
	}
	string GetType()
	{
		return type;
	}
	int GetTonnage()
	{
		return tonnage;
	}

	void SetName(string name)
	{
		this->name = name;
	}
	void SetTonnage(int tonnage)
	{
		this->tonnage = tonnage; 
	}
	void SetType(string type)
	{
		this->type = type;
	}
};