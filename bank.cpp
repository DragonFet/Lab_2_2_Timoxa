#pragma once
#include <iostream>
#include <string>
#include <set>
#include "bank.h"
using namespace std;

void Find_with_surename(bank* date, int N)
{
	string surenames;
	cout << "Input Surename to Find " << endl;
	cin >> surenames;
	
	for (size_t i = 0; i < N; i++)
	{
		if (date[i].surename==surenames)
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

void Find_date_more(bank* date, int N)
{
	int tmp,tmp_2;
	cout << "Input day and year " << endl;
	cin >> tmp>>tmp_2;
	for (size_t i = 0; i < N; i++)
	{
		if (date[i].ReturnDAY() > tmp && date[i].ReturnYear()>tmp_2)
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
