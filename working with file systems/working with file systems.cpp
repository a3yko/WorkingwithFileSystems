// working with file systems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int findPosition(ifstream& fin, int num);
int _tmain(int argc, _TCHAR* argv[])
{
		int num;
		cout << "Enter # to find : ";
		cin >> num;
		ifstream fin;
		fin.open("randNum.txt");
		cout << "The # is at position "
			<< findPosition(fin, num) << ".\n";
		fin.close();

		system("pause");
		return 0;
}

int findPosition(ifstream& fin, int num)
{
	int find, count = 1;
	while (fin >> find)
	{
		if (find == num)
		{
			return count;
		}
		else
		{
			count++;
		}
	}
}