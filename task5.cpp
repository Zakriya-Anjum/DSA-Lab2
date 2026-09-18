#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 4};
    assert(isSorted(arr, 5) == true);
}

// Additional test 1
void testTwoElementsSorted() {
    int arr[] = {2, 8};
    assert(isSorted(arr, 2) == true);
}

// Additional test 2
void testTwoElementsUnsorted() {
    int arr[] = {8, 2};
    assert(isSorted(arr, 2) == false);
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testTwoElementsSorted();
    testTwoElementsUnsorted();

    cout << "All tests passed!" << endl;

    return 0;
}