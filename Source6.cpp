#include<iostream>
using namespace std;
void printreverse(int arr[]);
int main()
{
	int arr[7];
	cout << "enter 7 numbers" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	printreverse(arr);
	return 0;
}
void printReverse(int arr[]) {
	for (int i = 6; i < 0; i--)
	{
		cout << "reversed array is" << arr[i];
	}
}