// Write a C++ program to find the frequency of presence an element in an array.
#include <iostream>
using namespace std;

class frequency {
    private:
        int m[100], n, ele, freq;
    public:
        void getdata();
        void findfreq();
        void display();
};

void frequency::getdata() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    cout << "Enter the element to find its frequency: ";
    cin >> ele;
}

void frequency::findfreq() {
    freq = 0;
    for (int i = 0; i < n; i++) {
        if (m[i] == ele) {
            freq++;
        }
    }
}

void frequency::display() {
    cout << "The frequency of " << ele << " in the array is: " << freq << endl;
}

int main() {
    frequency f;
    f.getdata();
    f.findfreq();
    f.display();
    return 0;
}