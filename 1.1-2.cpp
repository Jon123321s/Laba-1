#include <cmath>
#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");
	double G = 6.67 * (1/pow(10, 11));
	int m1,m2,d;
	cout<<"������� ����� ������� ���� � �� - " << "\n";
	cin>>m1;
	cout<<"������� ����� ������� ���� � �� - " << "\n";
	cin>>m2;
	cout<<"������� ���������� ����� ������ � � - " << "\n";
	cin>>d;
	cout<<(G*m1*m2)/pow(d,2);

	return 0;
}