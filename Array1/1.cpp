#include <iostream>
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
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod = prod * arr[i];
    }
    cout<< prod;
}