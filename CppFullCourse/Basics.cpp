#include<iostream>
using namespace std;

// RectangleArea is a paramterised macros
#define RectangleArea(length, breadth) (length * breadth)

int CalculateRectangleArea(int length, int breadth)
{
	int area = RectangleArea(length, breadth);
	return area;
}

int main()
{
	//cout << "Hello, welcome to \n CPP Basics";
	//cout << "Hello, welcome to " << endl << "CPP Basics";
	int rectangleArea = CalculateRectangleArea(5, 10);
	cout << "Area of rectanlge with length(5) and breadth(10) is: " << rectangleArea << " units.";
}

