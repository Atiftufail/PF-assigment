#include <iostream>
using namespace std;
void print(char str[]);
int main() {
    char str[100];
    cout << "Enter a character: ";
    cin.getline(str, 100);
    print(str);
    return 0;
}
void print(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        cout <<"line"<<i<<"="<< str[i] << endl;
}

