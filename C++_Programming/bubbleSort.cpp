#include "iostream"
using namespace std;
int main()
{
    int a[] = {2, 5, 3, 67, 54, 43, 32};
    int len = sizeof(a) / sizeof(a[0]);
    int count = 1;
    while (count < len)
    {
        for (int i = 0; i < len - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }

        count++;
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
}