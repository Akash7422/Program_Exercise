#include "iostream"
#include <algorithm>

using namespace std;
int main(){
int a[]={2,11,9,7,5,3,5,7,9,11,13,15};
int n=sizeof(a)/sizeof(a[0]);
int FD=a[1]-a[0];
int MaxLen=2;
int MaxMx=2;
for(int i=1;i<=n-2;i++){
if(FD==a[i+1]-a[i]){
    MaxLen++;
    MaxMx=max(MaxMx,MaxLen);
}
else{
    FD=a[i+1]-a[i];
    MaxMx=max(MaxMx,MaxLen);
    MaxLen=2;
}

}
cout<<"Maximum length of the arithmatic array is: "<< MaxMx<<endl;
}