#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 12345;
	int digit_sum = 0;
	while (n > 0) {
		int last_digit = n % 10;
		cout << "last_digit: " << last_digit;
		digit_sum += last_digit;
		n /= 10;
		cout << "n: " << n << endl;
	}
	cout << "digit_sum: " << digit_sum;
}