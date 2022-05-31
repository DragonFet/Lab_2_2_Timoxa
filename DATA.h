#pragma once
#include <iostream>
#include <string>
#include <set>
using namespace std;

class DATA
{
public:
DATA()
	{
		day = 0;
		year = 0;
	}
#pragma region Set_Return
int getValue()
{
	while (true)
	{
		cout << "Please input VALLUE";
		cout << '\n';
		int a;
		cin >> a;
		cout << '\n';

		if (cin.fail())
		{
			cin.clear(); // 
			cin.ignore(32767, '\n');
		}
		else return a;

	}

}
double getValueD()
{
	while (true)
	{
		cout << "Please input VALLUE";
		cout << '\n';
		double a;
		cin >> a;
		cout << '\n';

		if (cin.fail())
		{
			cin.clear(); // 
			cin.ignore(32767, '\n');
		}
		else return a;

	}

}
	void set_day()
	{
		int day;
		cout << "Input day" << endl;
		day = getValue();
		this->day = day;
	}
	void set_month()
	{
		string tmp;
		cout << "Input month" << endl;
		cin >> tmp;
		this->month = tmp;

	}
	void set_year()
	{
		int year;
		cout << "Input year" << endl;
		year = getValue();
		this->year = year;
	}
	int Return_day()
	{
		return day;
	}
	string Return_month()
	{
		return month;
	}
	int Return_Year()
	{
		return year;
	}
#pragma endregion
#pragma region Input
	void Input_day(int day)
	{
		this->day = day;
	}
	void Input_month(string month)
	{
		this->month = month;
	}
	void Input_year(int year)
	{
		this->year = year;
	}
#pragma endregion
void Print()
	{
		cout << endl;
		cout << "Day" << this->day << endl;
		cout << "Moth" << this->month << endl;
		cout << "Year" << this->year << endl;
	}
	

private:
	int day;
	string month;
	int year;
};

