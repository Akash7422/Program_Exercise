#include <iostream>
using namespace std;

class MyClass {
public:
    static int static_var;  // Static variable

    MyClass() {
        static_var++;
    }

    void publicMethod() {
        privateMethod();
    }

private:
    void privateMethod() {
        cout << "Static variable value: " << static_var << endl;
    }
};

// Initialize static variable
int MyClass::static_var = 0;

int main() {
    MyClass obj1;
     obj1.publicMethod();  
    MyClass obj2;

    obj1.publicMethod();  // Output: Static variable value: 2
    obj2.publicMethod();  // Output: Static variable value: 2

    return 0;
}