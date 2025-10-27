#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
    int num1;
public:
    void setData() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    friend float findMean(ClassA, ClassB);  // Friend function
};

class ClassB {
    int num2;
public:
    void setData() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    friend float findMean(ClassA, ClassB);  // Friend function
};

// Friend function definition
float findMean(ClassA objA, ClassB objB) {
    float mean = (objA.num1 + objB.num2) / 2.0;
    return mean;
}

int main() {
    ClassA a;
    ClassB b;

    a.setData();
    b.setData();

    float mean = findMean(a, b);
    cout << "\nThe Mean Value is: " << mean << endl;

    return 0;
}
