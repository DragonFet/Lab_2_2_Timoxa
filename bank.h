#pragma once
#include <iostream>
#include <string>
#include <set>
#include "DATA.h"
using namespace std;

class bank
{
public:
	bank()
	{
		account = 0;
		sum = 0;

	}
#pragma region Basic
	void setName()
	{
		string tmp;
		cout << "Input name" << endl;
		cin >> tmp;
		name = tmp;
	}
	string ReturnName()
	{
		return name;
	}
	void setSurename()
	{
		string tmp;
		cout << "Input Surename" << endl;
		cin >> tmp;
		surename = tmp;
	}
	string ReturnSurename()
	{
		return surename;
	}
	void setaccount()
	{
		int tmp;
		cout << "input account" << endl;
		tmp = getValue();
		account = tmp;
	}
	int Returnaccount()
	{
		return account;
	}
	void setSuma()
	{
		double suma;
		cout << "Input sum" << endl;
		suma = getValueD();
		sum = suma;
	}
	double ReturnSuma()
	{
		return sum;
	}
	void setINFO()
	{
		person.set_day();
		person.set_month();
		person.set_year();
	}
	void Add_new_user(bank& date, int& N)
	{
		date.setName();
		date.setSurename();
		date.setaccount();
		date.setSuma();
		date.setINFO();
		++N;
	}
	void Output_All_User(bank* date, int N)
	{
		for (size_t i = 0; i < N; i++)
		{
			cout << "Name is:" << date[i].ReturnName() << endl;
			cout << "Surename is:" << date[i].ReturnSurename() << endl;
			cout << "Account is:" << date[i].Returnaccount() << endl;
			cout << "Sum on account is:" << date[i].ReturnSuma() << endl;
			cout << "Day is" << date[i].ReturnDAY() << endl;
			cout << "Month is" << date[i].ReturnMonth() << endl;
			cout << "Year is" << date[i].ReturnYear() << endl;
			cout << "Index is:" << N << endl;
		}
	}
	void Menu()
	{
		cout << "1-Add new account" << endl;
		cout << "2- Output all inforamtion" << endl;
		cout << "3-Find with surename" << endl;
		cout << "4- Find summa more" << endl;
		cout << "5- Sorty user " << endl;
		cout << "6-Find for date" << endl;
		cout << "7-Find more date" << endl;
		cout << "8-Exit" << endl;
	}
	int Exit()
	{
		return 6;
	}
	friend void save(bank* date, const int& N);
	void  setteName(string name)
	{
		this->name = name;
	}
	void settSurename(string surename)
	{
		this->surename = surename;
	}
	void settAccount(int account)
	{
		this->account = account;
	}
	void settsum(double suma)
	{
		this->sum = suma;
	}
	int ReturnDAY()
	{
		int days_ = person.Return_day();
		return days_;
	}
	string ReturnMonth()
	{
		string monthhs = person.Return_month();
		return monthhs;
	}
	int ReturnYear()
	{
		int years_ = person.Return_Year();
		return years_;
	}
	void Input_day(int day)
	{
		person.Input_day(day);
	}
	void Input_month(string month)
	{
		person.Input_month(month);
	}
	void Input_year(int year)
	{
		person.Input_year(year);
	}
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
#pragma endregion
#pragma region Basic_Function
	void Find_sum_more(bank* date, int N)
	{
		double sum_tmp=0;
		cout << "Input sum" << endl;
		cin >> sum_tmp;
		for (size_t i = 0; i < N; i++)
		{
			if (date[i].sum > sum_tmp)
			{
				cout << "Name is:" << date[i].ReturnName() << endl;
				cout << "Surename is:" << date[i].ReturnSurename() << endl;
				cout << "Account is:" << date[i].Returnaccount() << endl;
				cout << "Sum on account is:" << date[i].ReturnSuma() << endl;
				cout << "Day is" << date[i].ReturnDAY() << endl;
				cout << "Month is" << date[i].ReturnMonth() << endl;
				cout << "Year is" << date[i].ReturnYear() << endl;
				cout << "Index is:" << N << endl;
			}
		}
	}
	void Sorty_User(bank* date, int N)
	{
		set<string>tmp;

		for (size_t i = 0; i < N; i++)
		{
			tmp.insert(date[i].surename);
		}
		for (size_t i = 0; i < N; i++)
		{
			
			
			cout << "Name is:" << date[i].ReturnName() << endl;
			cout << "Surename is:" << date[i].ReturnSurename() << endl;
			cout << "Account is:" << date[i].Returnaccount() << endl;
			cout << "Sum on account is:" << date[i].ReturnSuma() << endl;
			cout << "Day is" << date[i].ReturnDAY() << endl;
			cout << "Month is" << date[i].ReturnMonth() << endl;
			cout << "Year is" << date[i].ReturnYear() << endl;
			cout << "Index is:" << N << endl;
			
		}
	}
	friend void Find_with_surename(bank* date, int N);
	void Find_date(bank* date, int N)
	{
		int tmp;
		cout << "Input day " << endl;
		cin >> tmp;
		for (size_t i = 0; i < N; i++)
		{
			if (date[i].ReturnDAY() == tmp)
			{
				cout << "Name is:" << date[i].ReturnName() << endl;
				cout << "Surename is:" << date[i].ReturnSurename() << endl;
				cout << "Account is:" << date[i].Returnaccount() << endl;
				cout << "Sum on account is:" << date[i].ReturnSuma() << endl;
				cout << "Day is" << date[i].ReturnDAY() << endl;
				cout << "Month is" << date[i].ReturnMonth() << endl;
				cout << "Year is" << date[i].ReturnYear() << endl;
				cout << "Index is:" << N << endl;
			}
		}
	}
	friend void Find_date_more(bank* date, int N);
#pragma endregion
static int n;
private:
	string name;
	string surename;
	int account;
	double sum;
	DATA person;
	

};

