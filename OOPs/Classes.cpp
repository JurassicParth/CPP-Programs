/*
Write a C++ program to create a class with data members principle, time, 
and rate. Create member functions to accept data values to compute simple
interest and display the result.
*/
#include <iostream>
using namespace std;

class SimpleInterest {
    private:
        double principle;
        double time;
        double rate;

    public:
        void acceptData();
        double computeSimpleInterest();
        void displayResult(double simpleInterest);
};

void SimpleInterest::acceptData() {
    cout << "Enter the principle amount: ";
    cin >> principle;
    
    cout << "Enter the time (in years): ";
    cin >> time;
    
    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;
}

double SimpleInterest::computeSimpleInterest() {
    return (principle * time * rate) / 100;
}

void SimpleInterest::displayResult(double simpleInterest) {
    cout << "The simple interest is: " << simpleInterest << endl;
}

int main() {
    SimpleInterest si;
    si.acceptData();
    double simpleInterest = si.computeSimpleInterest();
    si.displayResult(simpleInterest);
    
    return 0;
}