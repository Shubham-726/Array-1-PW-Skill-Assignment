#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && max!= arr[i] ){
            smax = arr[i];
        }
    }

    cout << smax;
}