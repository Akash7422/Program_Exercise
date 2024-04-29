#include <iostream>
using namespace std;
int main()
{
    int *p = new (nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        *p = 10;
        cout << *p << endl;
    }
    delete p;
    p = new int[4];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    for (int i = 0; i < 4; i++)
    {
        // cout<< *p<<endl;
        // *p++;
        // cout<<p[i]<<endl;
        cout << *(p + i) << endl;
    }
    delete p;
    char *ch = new char[10];
    ch[0] = 'a';
    ch[1] = 'b';
    for (int i = 0; i < 11; i++)
    {
        ch[i] = 'a' + i;
    }
    for (int i = 0; i < 11; i++)
    {
        cout << ch[i] << endl;
    }

    delete ch;
}