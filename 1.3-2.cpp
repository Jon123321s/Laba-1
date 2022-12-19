#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int I, b, k, m;
	cout << "Введите обьем информации в байтах < 2^30" << "\n";
	cin >> I;
	b = I % 1024;
	k = I / 1024;
	m = k / 1024;
	k = k % 1024;
	cout << I << " Байт = " << m << " Мбайт " << k << " Кбайт " << b << " байт ";

	return 0;
}