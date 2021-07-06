#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "ru");
	const unsigned char n = 5;
	int arr[n] = { 1,2,3,4,5};
	int min;
	int max;
	cout << "Введите значение элементов (" << n << ") шт.:";
		for (int i = 1; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}