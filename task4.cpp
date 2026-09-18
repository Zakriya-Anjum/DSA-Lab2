#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length of the string: ";
    cin >> length;

    char* str = new char[length + 1];

    cout << "Enter the string: ";
    cin >> str;

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    delete[] str;
    return 0;
}