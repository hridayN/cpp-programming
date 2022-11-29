#include<bits/stdc++.h>
using namespace std;

string reverseString(string str) {
	int length = str.size();
	string result = "";
	while (length--) {
		result.push_back(str[length]);
	}
	return result;
}

bool isPalindrome(string str) {
	int leftPtr = 0, rightPtr = str.size()-1;
	while (leftPtr <= rightPtr) {
		if (str[leftPtr] != str[rightPtr]) {
			return false;
		}
		leftPtr++;
		rightPtr--;
	}
	return true;
}

int main() {
	string str = "ABA";
	// str = reverseString(str);
	// cout << str << endl;
	// cout << str << " isPalindrome: " << isPalindrome(str);
	bool a = true;
	cout << "a: " << a;
}

