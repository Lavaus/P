#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a,b,d,c;
	cout << "������� 1 �����" << endl;
	cin >> a;
	cout << "������� 2 �����" << endl;
	cin >> b;
	cout << "������� ����� �������" << endl<<"1 - �����"<<endl<<"2 - ���������"<<endl << "3 - ������������" << endl << "4 - �������" << endl << "5 - ������� �� �������" << endl;
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
			cout << "������" << endl;
		}
		
	}
	if (c == 5)
	{
		d = a % b;
		cout << "a % b = " << d << endl;
	}
	


}
