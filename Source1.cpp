#include <iostream>
using namespace std;
int sum(int arr[], int a);
int main() {
    int arr[5];
    cout << "Enter Five integers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int s = sum(arr, 5);
    cout << "Sum of this is :" << s << endl;
}
int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

