#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a,b,d,c;
	cout << "Введите 1 число" << endl;
	cin >> a;
	cout << "Введите 2 число" << endl;
	cin >> b;
	cout << "Введиет число символа" << endl<<"1 - Сумма"<<endl<<"2 - Вычитание"<<endl << "3 - Произведение" << endl << "4 - Частное" << endl << "5 - Остаток от деления" << endl;
	cin >> c;
	if (c == 1)
	{

		d = a + b;
		cout << "a + b = " << d << endl;
	}
	if (c == 2)
	{

		d = a - b;
		cout << "a - b = " << d << endl;
	}
	if (c == 3)
	{
	
		d = a * b;
		cout << "a * b = " << d << endl;
	}
	if (c == 4)
	{
		if (b != 0) 
		{
			d = a / b;
			cout << "a / b = " << d << endl;
		}
		else
		{
			cout << "Ошибка" << endl;
		}
		
	}
	if (c == 5)
	{
		d = a % b;
		cout << "a % b = " << d << endl;
	}
	


}
