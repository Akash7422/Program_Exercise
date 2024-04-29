#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;
int main(){
string s="C++ Programming";
//cin>>s;
cout<<s<<endl;
//getline(cin,s);
//cout<<s;
//String functions
//1.length()
cout<<s.length()<<endl;
//2.substr(start,length)
cout<<s.substr(2,4)<<endl;
//3.find(string)
cout<<s.find("Programming")<<endl;
//4.compare(string)
cout<<s.compare("C++ Programming")<<endl;
//5.append(string)
s.append(" is fun");
cout<<s<<endl;
s.append("Progr",3,4);
cout<<s<<endl;
//6.erase(start,length)
s.erase(4,3);
cout<<s<<endl;
//7.replace(start,length,string)
s.replace(4,4,"is");
cout<<s<<endl;
//8.empty()
if(s.empty()){
    cout<<"String is empty"<<endl;
}
else{
    cout<<"String is not empty"<<endl;
}
//9.clear()
s.clear();
if(s.empty()){
    cout<<"String is empty"<<endl;
}
else{
    cout<<"String is not empty"<<endl;
}
//10.swap(string)
string s1="C++";
string s2="Java";
s1.swap(s2);
cout<<s1<<" "<<s2<<endl;
//11.at(index)
cout<<s2.at(2)<<endl;
//12.front()
cout<<s2.front()<<endl;
//13.back()
cout<<s2.back()<<endl;
//14.Insert()
s1.insert(0,"Hi ");
cout<<s1<<endl;
//15.push_back()
s2.push_back('s');
cout<<s2<<endl;
//16.pop_back()
s2.pop_back();
cout<<s2<<endl;
//17.String to Integer
string s3="12345";
int x=stoi(s3);
cout<<x<<endl;
//18.Integer to String
int y=12345;
string s4=to_string(y);
cout<<s4<<endl;
//19.String to Float
string s5="123.45";
float f=stof(s5);
//20.String sort
string s6="hello";
sort(s6.begin(),s6.end());
cout<<s6<<endl;
//2.remove()
string str7="Akash is a good boy";
remove(str7.begin(),str7.end(), ' ');
cout<<str7<<endl;
str7.erase(remove(str7.begin(),str7.end(), ' '),str7.end());
cout<<str7<<endl;
//21.missing letter
string str8="the quick brown fox jumps ovef the lazy dog";
str8.erase(remove(str8.begin(),str8.end(), ' '),str8.end());
sort(str8.begin(),str8.end());
cout<<str8<<endl;
//Before remove all duplicates from the str8 sorted string
for(int i=0;i<str8.length();i++){
    cout<<str8[i]<<" "<<(int)str8[i]<<endl;
    if((int)str8[i]!=i+97){
        cout<<"missing Letter is: "<<(char)(i+97)<<endl;
        break;
    }
}

}
