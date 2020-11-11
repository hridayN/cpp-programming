#include<iostream>
using namespace std;

// RectangleArea is a paramterised macros
#define RectangleArea(length, breadth) (length * breadth)

int CalculateRectangleArea(int length, int breadth)
{
	int area = RectangleArea(length, breadth);
	return area;
}

void DisplayArrayInformation()
{
	int array[3] = { 1, 2, 3 };
	for (int i = 0; i < 3; i++)
	{
		cout << i << "th element: " << array[i] << ", address: " << &array[i] << "\n";
	}
}

void DisplayArrayInformationUsingPointer()
{
	int array[3] = { 1, 2, 3 };
	int* ptr = array;
	for (int i = 0; i < 3; i++)
	{
		cout << i << "th element: " << *(array + i) << ", address: " << &array[i] << "\n";
	}
}

int ArrayElementsSum(int numberOfElements) {
	static int sum = 0;
	int array[2];
	for (int i = 0; i < numberOfElements; i++) {
		sum += array[i];
	}
	return sum;
}

void ElementsSum() {
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		int numberOfElements;
		cin >> numberOfElements;
		int sum = 0;
		for (int i = 0; i < numberOfElements; i++) {
			int element;
			cin >> element;
			sum += element;
		}
		//cout << sum << "\n";
	}
}

void StringBasic() {
	string str = "Hello";
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << ", ";
	}
}

void StringLengthComparison() {
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		string A, B;
		cin >> A;
		cin >> B;
		if (A.length() > B.length()) {
			cout << A.length() << "\n";
		}
		else {
			cout << B.length() << "\n";
		}
		cout << A + B << "\n";
	}
}

int main()
{
	//cout << "Hello, welcome to \n CPP Basics";
	//cout << "Hello, welcome to " << endl << "CPP Basics";
	//int rectangleArea = CalculateRectangleArea(5, 10);
	//cout << "Area of rectanlge with length(5) and breadth(10) is: " << rectangleArea << " units.";
	//DisplayArrayInformation();
	//DisplayArrayInformationUsingPointer();
	//ElementsSum();
	//StringBasic();
	//StringLengthComparison();
}

