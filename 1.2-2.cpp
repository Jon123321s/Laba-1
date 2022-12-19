#include <cmath>
#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int x1,y1,x2,y2;
	cout<<"Введите значение x для первой точки" << "\n";
	cin>>x1;
	cout<<"Введите значение y для первой точки" << "\n";
	cin>>y1;
	cout<<"Введите значение x для второй точки" << "\n";
	cin>>x2;
	cout<<"Введите значение y для второй точки" << "\n";
	cin>>y2;
	cout<<sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	return 0;
}