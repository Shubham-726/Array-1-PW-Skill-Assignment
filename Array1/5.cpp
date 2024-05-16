#include <iostream>
#include <climits>
#include <stdbool.h>
using namespace std;
int main()
{
    int size;
    cout << "enter size of array";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i+1;
            break;
        }
        else
        {
            continue;
        }
    }
}