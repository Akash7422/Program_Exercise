#include "iostream"
#include <algorithm>

using namespace std;
int main()
{
    int a[] = {1,1};
    int Ans;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                int found = i;
                Ans = min(Ans, found);
            }
        }
    }
    if (Ans < n)
    {
        cout << "Smallest index of repeating element is: " << Ans << endl;
    }
    else
    {
        cout << "Smallest index of repeating element is: -1" << endl;
    }
}
