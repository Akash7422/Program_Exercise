#include "iostream"
#include <algorithm>

using namespace std;
int main()
{
    int a[] = {2, 0, 1, 3, -8, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int start;
    int smallest;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            start = min(a[i], start);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        if (a[i] == start)
        {
            start = start + 1;
            i = -1;
        }
    }
    cout << "smallest missing positive number is: " << start << endl;
    return 0;
}