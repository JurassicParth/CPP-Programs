/*
Write a C++ program to create a class with data members a, b, c and
member functions to accept data, compute the discriminant based on the
following conditions and print the roots:
1. If determinant = 0, print the roots are real and equal
2. If determinant > 0, print the roots are real and distinct
3. If determinant < 0, print the roots are imaginary
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <process.h>
#include <conio.h>
using namespace std;

class QuadraticEquation {
    private:
        double a, b, c;

    public:
        void acceptData();
        void computeRoots();
};

void QuadraticEquation::acceptData() {
    cout << "Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;
}

void QuadraticEquation::computeRoots() {
    double determinant = b * b - 4 * a * c;

    if (determinant > 0) {
        double root1 = (-b + sqrt(determinant)) / (2 * a);
        double root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "The roots are real and distinct: " << fixed << setprecision(2) << root1 << " and " << root2 << endl;
    } else if (determinant == 0) {
        double root = -b / (2 * a);
        cout << "The roots are real and equal: " << fixed << setprecision(2) << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "The roots are imaginary: " << fixed << setprecision(2) << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    QuadraticEquation qe;
    qe.acceptData();
    qe.computeRoots();
    
    return 0;
}