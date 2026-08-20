// Write a C++ program to insert an element into an array.
#include <iostream>
using namespace std;

class Insertion {
    private:
        int n;
        int m[100]; // Assuming a maximum size of 100 for the array
        int ele;
        int p;
    
    public:
        void getData();
        void insertElement();
        void displayArray(int arr[], int size);
};

void Insertion::getData() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    
    cout << "Enter the element to be inserted: ";
    cin >> ele;
    
    cout << "Enter the position where the element should be inserted (0 to " << n << "): ";
    cin >> p;
}

void Insertion::insertElement() {
    if (p < 0 || p > n) {
        cout << "Invalid position! Please enter a position between 0 and " << n << "." << endl;
        return;
    }
    
    // Shift elements to the right to make space for the new element
    for (int i = n; i > p; i--) {
        m[i] = m[i - 1];
    }
    
    // Insert the new element at the specified position
    m[p] = ele;
    n++; // Increase the size of the array
}

void Insertion::displayArray(int arr[], int size) {
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Insertion insertion;
    insertion.getData();
    insertion.insertElement();
    insertion.displayArray(insertion.m, insertion.n);
    
    return 0;
}