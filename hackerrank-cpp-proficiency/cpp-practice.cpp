#include <iostream>
using namespace std;

string GetDigitName(int num) {
	string name;
	if (num >= 1 && num <= 9) {
		switch (num) {
			case 1: name = "one"; break;
			case 2: name = "two"; break;
			case 3: name = "three"; break;
			case 4: name = "four"; break;
			case 5: name = "five"; break;
			case 6: name = "six"; break;
			case 7: name = "seven"; break;
			case 8: name = "eight"; break;
			case 9: name = "nine"; break;
		}
	}
	else if (num > 9) {
		if (num % 2 == 0) {
			name = "even";
		}
		else {
			name = "odd";
		}
	}
	return name;
}

string EnglishEquivalent(int num) {
	string result = "";
	if (num >= 1 && num <= 9) {
		switch (num) {
		case 1: result = "one"; break;
		case 2: result = "two"; break;
		case 3: result = "three"; break;
		case 4: result = "four"; break;
		case 5: result = "five"; break;
		case 6: result = "six"; break;
		case 7: result = "seven"; break;
		case 8: result = "eight"; break;
		case 9: result = "nine"; break;
		}
	}
	else {
		result = "Greater than 9";
	}
	
	return result;
}

int max_of_four(int a, int b, int c, int d) {
	if (a > b && a > c && a > d) {
		return a;
	}
	else if (b > a && b > c && b > d) {
		return b;
	}
	else if (c > a && c > b && c > d) {
		return c;
	}
	else {
		if (d > a && d > b && d > c) {
			return d;
		}
	}
}

int main() {

	/*int n1 = 0, n2 = 0;
	cout << "Enter 1st num: ";
	cin >> n1;
	cout << "\nEnter 2nd num: ";
	cin >> n2;
	for (int i = n1; i <= n2; i++)
	{
		string digit = GetDigitName(i);
		cout << digit << endl;
	}*/
	/*string digitEu = EnglishEquivalent(8);
	cout << digitEu;*/

	int greatest = max_of_four(1, 2, 3, 4);
	cout << greatest << endl;

	greatest = max_of_four(4, 3, 2, 1);
	cout << greatest << endl;

	greatest = max_of_four(4, 1, 6, 0);
	cout << greatest << endl;
	return 0;
}