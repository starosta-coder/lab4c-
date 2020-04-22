#include <iostream>
#include <string>
#include <Windows.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>

using namespace std;

void BaseTask()
{
	cout << "Базовый уровень" << endl;
	cout << "Удалить первое слово заданной строки Разделителем слов считается пробел." << endl;
	char str[80] = "faE,1*fe A.,.3iBVf Oq. e.of 43G.FW2,jiq,e[ qe";
	char token[80];

	char* p = str;
	char* t = token;

	cout << str << endl;

	int index = 0;
	while (*p) {
		if (*p == ' ') {
			index = p - str;
			break;
		}
		++p;
	}

	while (*p) {
		if (*p != index) {
			*t = *p;
			++t;
		}
		++p;
	}
	*t = 0;

	cout << token << endl;
}

void MediumTask()
{
	cout << "Средний уровень:" << endl;
	cout << "В заданной строке поменять местами рядом стоящие символы между собой." << endl;
	string str;
	cout << "Введите строку:" << endl;
	getline(cin, str);
	for (int i = 0; i < str.size() - 1; i += 2)
	{
		swap(str[i], str[i + 1]);
	}
	cout << "Нужная строка:" << "\n";
	cout << str << "\n";
	cin.get();
}

void HardTask()
{
	cout << "Высокий уровень:" << endl;
	cout << "Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую." << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char string1[] = { "fjanafhnadfgafha" };
	char string2[] = { "dfghsghfgjutyrjfbnx" };
	char string3[20] = {};
	for (int j = 0; j < 20; j++)
	{

		for (int i = 0; i < sizeof(string1); i++)
		{
			char temp;
			for (int k = 0; k < sizeof(string2); k++)
			{
				if (string1[i] != string2[k])
				{
					temp = string1[i];
				}
				else
				{
					temp = NULL;
					break;
				}
			}
			string3[j] = temp;
			if (string3[j] != NULL)
			{
				j++;
			}
		}
	}
	cout << string3;
	cout << endl;
	_getch();
}

int main()
{
	setlocale(LC_ALL, "Rus");
	BaseTask();
	MediumTask();
	HardTask();
}