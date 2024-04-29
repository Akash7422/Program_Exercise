#include "iostream"
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
     int a=10, b=20;
    // cout<<a <<" "<<b<<endl;
    // swap(&a,&b);
    // cout<<a <<" "<<b<<endl;
    int *ptr1=&a;
    int *ptr2=&b;
    cout<<*ptr1<<" "<<*ptr2<<endl;
    swap(ptr1,ptr2);
    cout<<*ptr1<<" "<<*ptr2<<endl;

}