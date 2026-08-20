// Write a C++ program to sort an array in ascending order using insertion sort.
#include <iostream>
using namespace std;

class Sorting {
    private:
        int n;
        int m[100]; // Assuming a maximum size of 100 for the array
    
    public:
        void getData();
        void insertionSort();
        void displayArray(int arr[], int size);
};

void Sorting::getData() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
}

void Sorting::insertionSort() {
    for (int i = 1; i < n; i++) {
        int key = m[i];
        int j = i - 1;
        
        // Move elements of m[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && m[j] > key) {
            m[j + 1] = m[j];
            j--;
        }
        m[j + 1] = key;
    }
}

void Sorting::displayArray(int arr[], int size) {
    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Sorting sorting;
    sorting.getData();
    sorting.insertionSort();
    sorting.displayArray(sorting.m, sorting.n);
    
    return 0;
}