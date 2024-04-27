#include <iostream>
using namespace std;
#include "string.h"

void myFunction() {
  cout << "I just got executed!\n";
}
struct student {
        int rn;
        char name[10];
    };
int main() {
  //student s1={12,"Akash"};
  //cout<<s1.rn<<endl;
  student *s1;
  s1=(struct student *)malloc(sizeof(struct student));
  cout<<sizeof(s1)<<endl;
  strcpy(s1->name,"Akash");
  s1->rn=10;
  cout<<s1->rn<<endl;
  cout<<s1->name<<endl;
  /*myFunction();
  myFunction();
  myFunction();
  return 0;*/
  int A[12]={12,33,23,2,312,12,12,3123,3};
  cout<< sizeof(A);
return 0;
}
