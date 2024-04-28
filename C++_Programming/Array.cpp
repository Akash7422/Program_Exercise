#include <iostream>
using namespace std;
int main() {
    int arr[3][4]; // Example 2D array
    int numRows = sizeof(arr) / sizeof(arr[0]);
    int numCols = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    cout << "Number of rows: " << numRows << endl;
    cout << "Number of columns: " << numCols << endl;

    return 0;
}