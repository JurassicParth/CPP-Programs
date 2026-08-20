// Write a C++ program to delete an element from an array from a given position.
#include <iostream>
using namespace std;

class Deletion {
    private:
        int n;
        int m[100]; // Assuming a maximum size of 100 for the array
        int p;
    
    public:
        void getData();
        void deleteElement();
        void displayArray(int arr[], int size);
};

void Deletion::getData() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    
    cout << "Enter the position of the element to be deleted (0 to " << n - 1 << "): ";
    cin >> p;
}

void Deletion::deleteElement() {
    if (p < 0 || p >= n) {
        cout << "Invalid position! Please enter a position between 0 and " << n - 1 << "." << endl;
        return;
    }
    
    // Shift elements to the left to fill the gap created by deleting the element
    for (int i = p; i < n - 1; i++) {
        m[i] = m[i + 1];
    }
    
    n--; // Decrease the size of the array
}

void Deletion::displayArray(int arr[], int size) {
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Deletion deletion;
    deletion.getData();
    deletion.deleteElement();
    deletion.displayArray(deletion.m, deletion.n);
    
    return 0;
}