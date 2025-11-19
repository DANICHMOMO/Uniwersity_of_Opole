#include<iostream>
#include<vector>

using namespace std;

void task1() {
	int x;
	vector<int> a = {};
	cout << "Give numbers of array: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	int temp = a.at(0);
	for (int i = 0; i < 5; i++)
	{
		if (temp > a.at(i))	
		{
			temp = a.at(i);
		}
	}
	cout << "Lowest number is: " << temp;
}

void task2() {
	int x;
	int LowestTemp, GreatestTemp;
	vector<int> a = {};
	cout << "Give numbers of array: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	LowestTemp = GreatestTemp = a.at(0);
	for (int i = 0; i < 5; i++)
	{
		if (LowestTemp > a.at(i))
		{
			LowestTemp = a.at(i);
		}
		if (GreatestTemp < a.at(i))
		{
			GreatestTemp = a.at(i);
		}
	}
	cout << "Lowest number is: " << LowestTemp << "\n";
	cout << "Greatest number is: " << GreatestTemp;
}

void task3() {
	vector<int> a = {};
	int x;
	cout << "Give numbers of array: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	cout << "Secound Greatest Array: ";
	cout << a.at(2);
}

void task4() {
	vector<int> a = {};
	int x;
	cout << "Give numbers of array: ";
	for (int i = 0; i < 3; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	cout << "Sorted Array: ";
	for (int i = 0; i < a.size(); i++)
	{
		cout << a.at(i) << ", ";
	}
}

void task5() {

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
	}
	return 0;
}