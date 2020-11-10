#include <iostream>
using namespace std;

void PrintMultiples(int num) {
	for (int i = 1; i <= 10; i++) {
		cout << num << " x " << i << " = " << (num * i) << endl;
	}
}

void PrintStringOddEvens(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (i % 2 == 0) {
			cout << str[i];
		}
	}
	cout << " ";
	for (int i = 0; i < str.length(); i++) {
		if (i % 2 != 0) {
			cout << str[i];
		}
	}
}

int main() {
	/*cout << "**** 7 ****" << endl;
	PrintMultiples(7);

	cout << "**** 8 ****" << endl;
	PrintMultiples(8);

	cout << "**** 14 ****" << endl;
	PrintMultiples(14);*/

	int n;
	cout << "Enter the no. of test cases: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string str;
		cout << "Enter " << i << "th string: ";
		cin >> str;
		PrintStringOddEvens(str);
		cout << endl;
	}
	return 0;
}



class Person {
	int age;
	Person(int initialAge) {
		if (initialAge > 0) {
			this->age = initialAge;
		}
		else {
			this->age = 0;
			cout << "Age is not valid, setting age to 0." << endl;
		}
	}

	void yearPasses() {
		this->age++;
	}

	void amIOld() {
		if (this->age < 13) {
			cout << "You are young." << endl;
		}
		else if (this->age >= 13 && this->age < 18) {
			cout << "You are a teenager." << endl;
		}
		else {
			cout << "You are old." << endl;
		}
	}
};