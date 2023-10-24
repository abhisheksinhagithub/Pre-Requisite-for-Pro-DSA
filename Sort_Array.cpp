#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    // sorting a vector
    vector<int> a = {3, 2, 8, 5, 0, 8};
    sort(a.begin(), a.end()); // by using sort function we can sort a vector

    for (auto v : a)
    {
        cout << v << " ";
    }

    cout << endl;

    // sorting an array
    int arr[5] = {1, 2, 1, 3, 2};

    // sort(arr.begin(),arr.end()); // we cannot sort a array using sort function. only used with vector
    // sort(arr[0],arr[4]); // using this way also we cannot sort an array

    int n = sizeof(arr) / sizeof(arr[0]); // by using this we can find the size of the array

    /*Here we take two parameters, the beginning of the array and the length n upto which we want the
    array to be sorted*/

    sort(arr, arr + n); // by using this we can sort the array

    sort(arr, arr + 5); // this will sort the array

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // How to sort in descending order ?

    /*
    sort() takes a third parameter that is used to specify the order in which elements are to be sorted.
    We can pass the “greater()” function to sort in descending order. This function does a comparison
    in a way that puts greater elements before. */

    /*

    sort(arr, arr + n, greater<int>());

    int arr[] = {1, 2, 1, 3, 2};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,greater());    ----> this will sort in descending order

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    --------------------------------------------------------------------------------------------------

    even in vector also we can sort in descending order by using greater()

    vector<int>a={3,2,8,5,0,8};
    sort(a.begin(),a.end(),greater());

    */
}