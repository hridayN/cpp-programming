#include <iostream>
using namespace std;

void PrintHourGlass(int arr[3][3]) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1) {
				if (i == j) {
					cout << arr[i][j] << " ";
				}
				else {
					cout << "  ";
				}
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}

int HourGlassSum(int arr[3][3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1) {
				if (i == j) {
					sum += arr[i][j];
				}
			}
			else {
				sum += arr[i][j];
			}
		}
	}
	return sum;
}

void TwoDArrayBasic() {
	// Initialization
	const int rows = 3, cols = 3;
	int arr[rows][cols] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	/*for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	PrintHourGlass(arr);
	int sum = HourGlassSum(arr);
	cout << "Sum: " << sum;
}

void AllHourGlasses() {
	const int rows = 4, cols = 4;
	int arr[rows][cols] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	
	// create a 2d array of 3x3 from above array and pass it to function
	int subArr[3][3];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			
			subArr[i][j] = arr[i][j];
		}

	}
	PrintHourGlass(subArr);
}

int main() {
	TwoDArrayBasic();
	return 0;
}