#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Integer allocated on the stack
    int iValue = 67;

    cout << "Stack Variable:" << endl;
    analyze_pointer(&iValue);

    // Integer allocated dynamically on the heap
    int* heapValue = new int;
    *heapValue = 100;

    cout << "Heap Variable:" << endl;
    analyze_pointer(heapValue);

    delete heapValue;
    return 0;
}