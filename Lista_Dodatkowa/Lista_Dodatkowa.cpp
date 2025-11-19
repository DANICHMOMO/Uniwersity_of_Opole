#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void task1() {
	int amount_of_numbers;
	vector<int> a;
	cout << "Give array size; ";
	cin >> amount_of_numbers;
	for (int i = 0; i < amount_of_numbers; i++)
	{
		int x = 0;
		cout << "Give me number\n";
		cin >> x;
		a.push_back(x);
	}
	cout << "Even numbers\n";
	a.rbegin();
	for (int i = 0; i < amount_of_numbers; i++)
	{
		cout << a.back() << ", ";
		a.pop_back();
	}
}

void task2() {
	int smallest_number;
	int amount_of_numbers;
	vector<int> a;
	cout << "Give array size; ";
	cin >> amount_of_numbers;
	for (int i = 0; i < amount_of_numbers; i++)
	{
		int x = 0;
		cout << "Give me number\n";
		cin >> x;
		a.push_back(x);
	}
	smallest_number = a.front();
	for (int i = 0; i < amount_of_numbers; i++)
	{
		if (smallest_number > a.at(i)) {
			smallest_number = a.at(i);
		}
	}
	cout << "Smallest number is: " << smallest_number;
}

void task3() {
	vector<int> a = { 5, 1, 4, 2, 8 };
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	cout << "Sorted Array: ";
	for (int i = 0; i < a.size(); i++)
	{
		cout << a.at(i);
	}
}

void task4() {
	int amount_of_numbers;
	vector<int> a;
	cin >> amount_of_numbers;
	for (int i = 0; i < amount_of_numbers; i++)
	{
		int x = 0;
		cout << "Give me number\n";
		cin >> x;
		a.push_back(x);
	}
	cout << "Even numbers\n";
	for (int i = 0; i < amount_of_numbers; i++)
	{
		if (a.back() % 2 == 0) {
			cout << a.back() << ", ";
			a.pop_back();
		}
		else
		{
			a.pop_back();
		}
	}
}

void task5() {
	int amount_of_numbers;
	vector<int> a;
	cin >> amount_of_numbers;
	for (int i = 0; i < amount_of_numbers; i++)
	{
		int x = 0;
		cout << "Give me number\n";
		cin >> x;
		a.push_back(x);
	}
	cout << "Even numbers\n";
	for (int i = 0; i < amount_of_numbers; i++)
	{
		if (a.back() % 2 == 1) {
			cout << a.back() << ", ";
			a.pop_back();
		}
		else
		{
			a.pop_back();
		}
	}
}

void task6() {
	int amount_of_numbers = 0;
	vector<float> a;
	cin >> amount_of_numbers;
	cout << "Enter array of numbers: ";
	for (int i = 0; i < amount_of_numbers; i++)
	{
		int x = 0;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 3; i < 15; i++)
	{
		cout << a.at(i) << ", ";
	}
}

void task7() {
	vector<int> a = { 5, 1, 4, 2, 8 };
	cout << "Even Numbers: \n";
	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) % 2 == 0) {
			cout << a.at(i) << ", ";
		}
	}
	cout << "\nOdd Numbers: \n";
	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) % 2 == 1) {
			cout << a.at(i) << "\n";
		}
	}
}
void task8() {
	int a = 1;
	for (int i = 1; i < 10; i++)
	{
		cout << a << "\n";
		a = pow(2, i);
		//a = 2 * a;
	}
}

void task9() {
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\n";
		}
		cout << "\n";
	}
}

void task10() {
	int a, amount = 0;
	cout << "Give number: ";
	cin >> a;
	do {
		amount++;
		a /= 10;
	} while (a != 0);
	cout << "Answer is: " << amount;
}

void task11() {
	int n;
	cout << "Give number to add: ";
	cin >> n;
	int sum = 0;
	while (n != 0) {
		int last = n % 10;
		sum += last;
		n /= 10;
	}
	cout << "Answer is: " << sum;
}

void task12() {
	int num;
	cout << "Give number to reverce: ";
	cin >> num;
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
}

void task13() {
	int x, y;
	cout << "Give to numbers: ";
	cin >> x;
	cout << "Give to numbers: ";
	cin >> y;
	if (x > y) {
		cout << "X is bigger: " << x;
	}
	else 
	if (y > x)	{
		cout << "Y is bigger: " << y;
	}
	else{
		cout << "X equals Y: " << x << " = " << y;
	}

}

void task14() {
	int n;
	int x = 0;
	int y = 1;
	int buffer = 0;
	cout << "Enter amount of Fibannachi numbers to calculate: ";
	cin >> n;
	cout << x << "\n";
	cout << y << "\n";
	for (int i = 0; i < n; i++)
	{
		buffer = y + x;
		x = y;
		y = buffer;
		cout << buffer << "\n";
	}
}

void task15() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
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
		task4();
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
	case 9:
		task9();
		break;
	case 10:
		task10();
		break;
	case 11:
		task11();
		break;
	case 12:
		task12();
		break;
	case 13:
		task13();
		break;
	case 14:
		task14();
		break;
	case 15:
		task15();
		break;
	}
	return 0;
}