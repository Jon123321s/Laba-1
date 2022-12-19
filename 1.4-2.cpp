#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");
	
	int d, a, b, c, u;
	cout << "¬ведите угол в градусах" << "\n";
	cin >> d;
	u = d * 6000 / 360;
	a = u / 100;
	b = u / 10 % 10;
	c = u % 10;
	cout << "”гол "<<d<<"\u00b0"<<"= " << a << "-" << b << c;

	return 0;


}

