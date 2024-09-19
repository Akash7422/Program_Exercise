#include <iostream>
#include "string.h"
using namespace std;

class Parent
{
private:
    int A, B, C;
    string names[10] = {"Akash", "Avinash", "Pushpa", "Maruti"};
    int len = sizeof(names) / sizeof(names[0]);

public:
    static int count;
    Parent()
    {
        // cout << "Enter the value of A" << endl;
        // cin >> A;
        // cout << "Enter the value of B" << endl;
        // cin >> B;
        // C = A + B;
    }
    Parent(int a, int b)
    {
        A = a;
        B = b;
        C = A + B;
        cout << "The sum of A and B is " << C << endl;
    }

    void displayResult()
    {
        cout << "Value of A: " << A << " Value of B: " << B << " Value of C: " << C << endl;
    }

    void getUserAuthenticated(string name)
    {

       if(!returnUserAthenticated(name)){
        cout << "User is not authenticated" << endl;
       } 
    }

private:
    int returnUserAthenticated(string name)
    {
        int flag;
        cout << "Functiona called: " << count + 1 << endl;
        cout << "Name: " << name << endl;
        for (int i = 0; i < len; i++)
        {
            // cout<<names[i]<<endl;
            if (names[i] == name)
            {
                cout << "User authenticated" << endl;
                 flag= 1;
            }
            else{
                flag=0;
            }
            
        }
        count++;
        return flag;
    }

public:
    void dummyFunction();
    friend class Child;
};

int Parent::count = 0;
void Parent::dummyFunction()
{
    cout << "DUMMY FUNCTION" << endl;
}

class Child : public Parent
{
private:
    string name = "Avinash";

public:
    void CallParentClassFunction()
    {
        returnUserAthenticated(name);
    }
};

int main()
{
    // Parent p1;
    // p1.displayResult();

    // Parent p2(12, 10);
    // p2.displayResult();

    Parent p3;
    p3.getUserAuthenticated("Akash");
    p3.getUserAuthenticated("Manju");

    Child c1;
    c1.CallParentClassFunction();
}