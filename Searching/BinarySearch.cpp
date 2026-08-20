// Write a C++ program to search for a given element in an array using Binary Search method.
#include <iostream>
using namespace std;

class BinarySearch {
    private:
        int n;
        int m[100]; // Assuming a maximum size of 100 for the array
    
    public:
        void getData();
        int binarySearch(int arr[], int left, int right, int x);
};

void BinarySearch::getData() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
}

int BinarySearch::binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If the element is smaller than mid, then it can only be present in the left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        // Else the element can only be present in the right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // Element is not present in the array
    return -1;
}

int main() {
    BinarySearch bs;
    bs.getData();
    
    int x;
    cout << "Enter the element to search for: ";
    cin >> x;

    int result = bs.binarySearch(bs.m, 0, bs.n - 1, x);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}