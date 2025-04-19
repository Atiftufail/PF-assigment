#include <iostream>
#include <fstream>
using namespace std;
void addtexttoFile(char str[]);
int main() {
	char input[100]{};
	cout << "Enter Your Text :";
	cin.getline(input, 100);
	addtexttoFile(input);

	return 0;
}
void addtexttoFile(char str[]) {
	ofstream out;
	out.open("output.txt");
	out << str << endl;
	cout << "Text Enter Successfully" << endl;
}