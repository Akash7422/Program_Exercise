#include "iostream"
#include <thread>
#include <chrono>
using namespace std;
int r = 5, c = 5, i, j;
void rectangle()
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void halowRectangle()
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void invertedTraingle()
{
    for (i = 0; i < r; i++)
    {
        for (j = c; j > i; --j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void rightShiftedTraingle1()
{
    for (i = 0; i < r; i++)
    {
        for (j = c; j > i; --j)
        {
            cout << " ";
        }
        for (j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void rightShiftedTraingle2(){
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            if(j<=c-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void rightShiftedNoTraingle(){
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            if(j<=c-i){
                cout<<" ";
            }
            else{
                cout<<i;
            }
        }
        cout<<endl;
    }
}
void rightShiftedCntNoTraingle(){
    int count=0;
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            if(j<=c-i){
                cout<<" ";
            }
            else{
                cout<<count<<"";
                count++;
            }
        }
        cout<<endl;
    }
}

int main()
{
     halowRectangle();
    cout << endl;
     invertedTraingle();
    cout << endl;
    rightShiftedTraingle1();
    cout<<endl;
    rightShiftedTraingle2();
    cout<<endl;
    rightShiftedNoTraingle();
    cout<<endl;
    rightShiftedCntNoTraingle();

    return 0;
}
