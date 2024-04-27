#include "iostream"
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 7,5};
    int n = sizeof(a) / sizeof(a[0]);
    int S = 10;
    int sum = a[0];
    int sp = 0, ep = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        //cout << "ith index: " << i << " sp: " << sp << " ep:" << ep << " Sum: " << sum << endl;
        if (sum == S || a[sp] == S)
        {
            cout << "stating and endsimg position of array is: " << sp + 1 << " " << ep + 1;
            flag = 1;
            break;
        }
        else
        {
            if (sum > S)
            {
                sp++;
                i = sp;
                ep = sp + 1;
                sum = a[ep] + a[sp];
            }
            else
            {
                ep++;
                sum = a[ep] + sum;
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Subarray positions not found!";
    }
}