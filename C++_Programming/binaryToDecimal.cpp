#include "iostream"
#include <cstring> 
#include <math.h>
using namespace std;
int main(){
    char binary[]= "1110";
    int strLen=strlen(binary);
    int sum=0,count=0;
    for(int i=strLen;i>0;i--){
        if(binary[i-1]=='1'){
            sum=sum+pow(2,count);
        }
        count++;
        
    }
    cout<<sum<<endl;
    return 0;
}