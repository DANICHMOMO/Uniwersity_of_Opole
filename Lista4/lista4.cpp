#include<iostream>
#include<vector>
#include<string>

using namespace std;

void task1() {
	int a, output = 1;
	cout << "Enter factorial number: ";
	cin >> a;
	if (a >= 0) {
		for (int i = a; i >= 1; i--)
		{
			output = output * i;
		}
		cout << output;
	}
	else {
		cout << "0";
	}
}

void task2() {
	vector<int> a = { 42, 7, 19, 88, 3, 56, 21, 90, 12, 34, 67, 5, 29, 73, 15, 8, 99, 45, 62, 11, 23, 81, 37, 4, 50, 76, 9, 31, 64, 2 };
	int x, n;
	if (a.size() == 0) {
		cout << "Enter amount of elements in array: ";
		cin >> n;
		cout << "Give numbers of array: ";
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
	}
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	cout << "First element: " << a.front() << endl;
	cout << "Last element: " << a.back() << endl;
}

void task3() {
	int output = 0;
	vector<int> a = { 42, 7, 19, 88, 3, 56, 21, 90, 12, 34, 67, 5, 29, 73, 15, 8, 99, 45, 62, 11, 23, 81, 37, 4, 50, 76, 9, 31, 64, 2 };
	for (int i = 0; i < a.size(); i++)
	{
		output = output + a.at(i);
	}
	output = output / a.size();
	cout << output;
}

void task4() {
	int n;
	int x = 0;
	int y = 1;
	int buffer = 0;
	cout << "Give number: ";
	cin >> n;
	do
	{
		buffer = y + x;
		x = y;
		y = buffer;
	} while (n > buffer);
	cout << buffer << "\n";
	buffer = y + x;
	x = y;
	y = buffer;
	cout << buffer << "\n";
}

void task5() {
	vector<int> tape;
	int input;

	cout << "Enter the sequence (0s and 1s). Enter 2 to finish:" << endl;
	while (cin >> input) {
		if (input == 2) {
			break; 
		}
		if (input == 0 || input == 1) {
			tape.push_back(input);
		}
	}
	int countZeros = 0;
	int countOnes = 0;

	for (int bit : tape) {
		if (bit == 0) {
			countZeros++;
		}
		else if (bit == 1) {
			countOnes++;
		}
	}
	bool isZerosEven = (countZeros % 2 == 0);
	bool isOnesOdd = (countOnes % 2 != 0);

	cout << "--------------------------------" << endl;
	cout << "Count of 0s: " << countZeros << endl;
	cout << "Count of 1s: " << countOnes << endl;

	if (isZerosEven && isOnesOdd) {
		cout << "RESULT: ACCEPTED (Even 0s and Odd 1s)" << endl;
	}
	else {
		cout << "RESULT: REJECTED" << endl;
	}
}

void task6() {
	vector<int> tape;
	int input;

	cout << "Task: Sequence of 1s and 2s (terminate with 0)." << endl;
	cout << "Enter numbers:" << endl;
	while (cin >> input) {
		if (input == 0) break;
		if (input == 1 || input == 2) {
			tape.push_back(input);
		}
	}
	int countOnes = 0;
	int countTwos = 0;

	for (int num : tape) {
		if (num == 1) countOnes++;
		else if (num == 2) countTwos++;
	}
	cout << "-----------------" << endl;
	cout << "Ones: " << countOnes << ", Twos: " << countTwos << endl;

	if (countOnes >= 3 * countTwos) {
		cout << "RESULT: YES (Condition Met)" << endl;
	}
	else {
		cout << "RESULT: NO" << endl;
	}
}

void task7() {
	int n;
	cout << "Task 7: Enter the number of elements (n): ";
	cin >> n;

	vector<int> a(n);
	cout << "Enter " << n << " integers:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long sumPositive = 0;
	long long productEven = 1;
	bool evenFound = false;
	for (int val : a) {
		if (val > 0) {
			sumPositive += val;
		}
		if (val % 2 == 0) {
			productEven *= val;
			evenFound = true;
		}
	}
	if (!evenFound) productEven = 0;

	cout << "-----------------" << endl;
	cout << "Sum of positive numbers: " << sumPositive << endl;
	cout << "Product of even numbers: " << productEven << endl;
}

void task8() {
	int n;
	double x;

	cout << "Task 8/9: Polynomial Calculation" << endl;
	cout << "Enter degree of polynomial (n): ";
	cin >> n;

	cout << "Enter value of x: ";
	cin >> x;
	vector<double> coefficients(n + 1);

	cout << "Enter coefficients starting from a_n down to a_0:" << endl;
	for (int i = 0; i <= n; i++) {
		cout << "a_" << (n - i) << ": ";
		cin >> coefficients[i];
	}
	double result = coefficients[0];

	for (int i = 1; i <= n; i++) {
		result = result * x + coefficients[i];
	}

	cout << "-----------------" << endl;
	cout << "Result W(" << x << ") = " << result << endl;
}

void task9() {
	int n;
	double x;

	cout << "Task 8/9: Polynomial Calculation" << endl;
	cout << "Enter degree of polynomial (n): ";
	cin >> n;

	cout << "Enter value of x: ";
	cin >> x;
	vector<double> coefficients(n + 1);

	cout << "Enter coefficients starting from a_n down to a_0:" << endl;
	for (int i = 0; i <= n; i++) {
		cout << "a_" << (n - i) << ": ";
		cin >> coefficients[i];
	}
	double result = coefficients[0];

	for (int i = 1; i <= n; i++) {
		result = result * x + coefficients[i];
	}

	cout << "-----------------" << endl;
	cout << "Result W(" << x << ") = " << result << endl;
}

int task10(int a, int b, char operation) {
	int result = 0;
	int absA = abs(a);
	int absB = abs(b);
	bool negativeResult = (a < 0) ^ (b < 0);

	if (operation == '*') {
		for (int i = 0; i < absB; i++) {
			result += absA;
		}
	}
	else if (operation == '/') {
		if (b == 0) return 0;

		int remainder = absA;
		while (remainder >= absB) {
			remainder -= absB;
			result++;
		}
	}

	return negativeResult ? -result : result;
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
		int x, y;
		cout << "Enter two numbers: ";
		if (cin >> x >> y) {
			cout << "Multiplication (using +): " << task10(x, y, '*') << endl;
			cout << "Division       (using -): " << task10(x, y, '/') << endl;
		}
		break;
	}
	return 0;
}