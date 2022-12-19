#include <cmath>
#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");
	double G = 6.67 * (1/pow(10, 11));
	int m1,m2,d;
	cout<<"¬ведите массу первого тела в кг - " << "\n";
	cin>>m1;
	cout<<"¬ведите массу второго тела в кг - " << "\n";
	cin>>m2;
	cout<<"¬ведите рассто€ние между телами в м - " << "\n";
	cin>>d;
	cout<<(G*m1*m2)/pow(d,2);

	return 0;
}