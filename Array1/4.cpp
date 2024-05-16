#include <iostream>
#include <climits>
#include<stdbool.h>
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
 
    bool flag = false;
   
    for (int i = 0; i < size; i++)
    {
       for(int j = i+1; j< size; j++){
        if(arr[i]==arr[j])
            flag = true;
            break;
       }
        
    }
    if(flag = true){
        cout<<"Duplicate Exist";
    }
    else
    cout<<"Duplicate not exist";

}