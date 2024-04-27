#include "iostream"
using namespace std;

int main()
{
    int a[] = {1, 10, 24, 28, 31, 34, 56, 78};
    int ArrLength = sizeof(a) / sizeof(a[0]);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int s, e;
    s = 0;
    e = ArrLength;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            cout << mid;
            break;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}