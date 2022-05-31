#include <iostream>
#include <string>
#include "bank.h"
#include <fstream>
#include <sstream>
#include "DATA.h"
using namespace std;

string path = "data.txt";
int count_line = 0;
int N = 0;
void save(bank* date, const int& N)
{
	fstream datainput;
	datainput.open(path, ios::out);
	for (int i = 0; i < N; i++)
	{
		string name, surenamess,month;
		int account;
		double suma;
		int number,daysss,yearsss;
		name = date[i].ReturnName();
		surenamess = date[i].ReturnSurename();
		account = date[i].Returnaccount();
		suma = date[i].ReturnSuma();
		month = date[i].ReturnMonth();
		daysss = date[i].ReturnDAY();
		yearsss = date[i].ReturnYear();
		datainput << name << endl << surenamess << endl << account << endl << suma << endl << daysss << endl << month << endl<<yearsss<<endl;
		cout << endl;
	}
	datainput.close();
}
void Value_N(int& N) {
	fstream read;
	read.open(path, ios::in);
	int count = 1;
	string per;
	while (read.peek() != EOF) {
		getline(read, per);
		++count;
		if (count % 7 == 0)
		{
			++N;
		}
	}
	count_line = count;
}
int string_to_int(string str)
{
	int result;
	istringstream iss(str, istringstream::in);
	iss >> result;
	return result;
}
double string_to_double(string str)
{
	double result;
	istringstream iss(str, istringstream::in);
	iss >> result;
	return result;
}
void load_from_file(bank* date)
{
	int index = 0;
	fstream datainput;
	datainput.open(path, ios::in);
	for (int j = 0; j < count_line - 1;)
	{
		j = j + 7;
		for (int i = 0; i < 7; i++)
		{
			switch (i)
			{
			case 0:
			{
				string line;
				getline(datainput, line);
				date[index].setteName(line);
				break;
			}
			case 1:
			{
				string line;
				getline(datainput, line);
				date[index].settSurename(line);
				break;
			}
			case 2:
			{
				string line;
				getline(datainput, line);
				int tmp = string_to_int(line);
				date[index].settAccount(tmp);
				break;
			}
			case 3:
			{
				string line;
				getline(datainput, line);
				double c = string_to_double(line);
				date[index].settsum(c);
				break;
			}
			case 4:
			{
				string line;
				getline(datainput, line);
				int dayss= string_to_int(line);
				date[index].Input_day(dayss);
				break;
			}
			case 5:
			{
				string line;
				getline(datainput, line);
				date[index].Input_month(line);
				break;
			}
			case 6:
			{
				string line;
				getline(datainput, line);
				int dayss = string_to_int(line);
				date[index].Input_year(dayss);
				break;
			}

			}
		}
		index++;
	}
	datainput.close();
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
int main()
{
	Value_N(N);
	bank* date = new bank[10000];
	int solution = 100;
	load_from_file(date);
	bank help;
	while (solution!=8)
	{
		date->Menu();
		cout << "Input solution" << endl;
		solution = getValue();
		switch (solution)
		{
			case 1:
			{
				help.Add_new_user(date[N], N);
				system("pause");
				system("cls");
				break;

			}
			case 2:
			{
				help.Output_All_User(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				Find_with_surename(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				help.Find_sum_more(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				help.Sorty_User(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 6:
			{
				help.Find_date(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 7:
			{
				Find_date_more(date, N);
				system("pause");
				system("cls");
				break;
			}
			case 8:
			{
				solution = help.Exit();
				save(date, N);
				system("pause");
				system("cls");
				return 0;
			}
		}
	}
}
