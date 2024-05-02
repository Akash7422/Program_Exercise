#include <iostream>
using namespace std;
// Program to find a bit at given index.
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
int getNumberOfOnes(int n)
{
    int OnesCount = 0, ZerosCount = 0;
    while (n)
    {
        n = n & (n - 1);
        OnesCount++;
    }
    return OnesCount;
}
void getNumberOfOnesAndZeros(int n)
{
    int OnesCount = 0, ZerosCount = 0;
    while (n > 0)
    {
        if ((n & 1) != 0)
        {
            OnesCount++;
        }
        else
        {
            ZerosCount++;
        }
        n = n >> 1;
    }
    cout << "number of 1's:" << OnesCount << " "
         << "number of 0's:" << ZerosCount << endl;
}
int main()
{
    char Binary[] = "1110"; // convert this to Decimal and store it in variable
    int num = 14;
    int n = 2; // suppose want to fins bit at 2 index.
    cout << getBit(num, n) << endl;
    n = 0;
    cout << setBit(num, n) << endl;
    n = 2;
    cout << clearBit(num, n) << endl;
    n = 1;
    cout << updateBit(num, n, 1) << endl;

    cout << "number of 1's:" << getNumberOfOnes(11) << endl;
    
    getNumberOfOnesAndZeros(11);
}