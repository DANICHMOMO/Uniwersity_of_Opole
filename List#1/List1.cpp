#include<iostream>
#include<cmath>

using namespace std;

int task1() {
	int a1 = 0, r = 0, n = 0, output = 0;
	cout << "Enter a1: \n";
	cin >> a1;
	cout << "Enter r: \n";
	cin >> r;
	cout << "Enter n: \n";
	cin >> n;
	output = (2 * a1 + (n - 1) / 2) * n;
	cout << "Answer to Task 1 is" << output;
	return 0;
}

int task2() {
	int s = 0, m = 0, h = 0;
	cout << "Enter amount of secounds: ";
	cin >> s;
	m = s / 60; 
	h = m / 60;
	int s_output = s % 60; 
	int m_output = m - (60 * h);
	cout << "Secounds to Time: " << h << ":" << m_output << ":" << s_output;
	return 0;
}

int task3() {
	int n = 0, output = 0;
	cout << "Enter n: ";
	cin >> n;
	output = (n * (n + 1) * (2 * n + 1) / 6) + n;
	cout << "Sume of the first 10 elements of set is: " << output;
	return 0;
}

int task5() { // same as a task 4
	const int n = 11;
	int a[n];
	int x, i, output = 0;
	cout << "Enter 11 coefficients, starting with a10 down to a:\n";
	cout << "(e.g., a10 a9 a8 a7 a6 a5 a4 a3 a2 a1 a)\n";
	for (i = 0; i < 11; ++i)
	{
		cin >> a[i];
	}
	cout << "Enter x: ";
	cin >> x;
	for (i = 0; i < 11; ++i)
	{
		output = output * x + a[i];
	}
	cout << "Answer to Task 5 is: " << output << "\n";
	return 0;
}

int task6() {
	int x;
	double output;
	cout << "Enter x: ";
	cin >> x;
	output = pow(x, 64);
	cout << "Answer to Task 6 is: " << output;
	return 0;
}

int task7() {
	int x;
	cout << "Enter x: ";
	cin >> x;
	double output = pow(x, 60);
	cout << "Answer to Task 7 is" << output;
	return 0;
}

int task8() {
	double x = 0, y = 0;

	int a1 = 3, b1 = 2, c1 = 23, a2 = 5, b2 = -3, c2 = 13;
	cout << "True numbers is: a1 = 3, b1 = 2, c1 = 23, a2 = 5, b2 = -3, c2 = 13" << "\n";
	cout << "Enter a1: ";
	cin >> a1;
	cout << "Enter b1: ";
	cin >> b2;
	cout << "Enter c1: ";
	cin >> c1;
	cout << "Enter a2: ";
	cin >> a2;
	cout << "Enter b2: ";
	cin >> b2;
	cout << "Enter c2: ";
	cin >> c2;
	if (a1 != (b1 * a2) / b2 && a1 != 0) {
		x = (-b1 * c2 + c1 * b2) / (-b1 * a2 + a1 * b2);
		y = (a1 * c2 - c1 * a2) / (-b1 * a2 + a1 * b2);
	}

	cout << "Answer to Task 8 is: \n";
	cout << "x: " << x << "; " << "y: " << y;
	return 0;
}

int main() {
	int x;
	cout << "Chouse homework Task from first List by correspondin number: ";
	cin >> x;
	switch (x) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task5();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;
	case 7:
		task7();
		break;
	case 8:
		task8();
		break;
	}
	return 0;
}


