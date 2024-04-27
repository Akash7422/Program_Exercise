//This program is to sort an array using liner approach
#include "iostream"

using namespace std;

int main()
{
    int a[] = {45, 2, 5, 6, 23, 12, 3};
    int len = sizeof(a) / sizeof(a[0]);
    cout << len << endl;
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
