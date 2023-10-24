#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
  vector<int> a = {1, 2, 2, 3, 1, 1, 1, 5, 6, 7, 4, 7};
  int hash[8] = {0}; // here we have to declare atleast one more type here total type is 7 in the
                     // array so in hash we have to atleast declare one more as this hash has 0 in
                     // each & every indexes. just like array we have stored 0 at all places

  for (int i = 0; i < a.size(); i++)
  {
    hash[a[i]] += 1;
  }

  // till now i know only this methid to traverse a hash funcn.
  for (auto v : hash)
  {
    cout << v << " ";
  }
  cout << endl;
  /* output

    1 2 3 4 5 6 7  --> elements
  0 4 2 1 1 1 1 2  --> frequency

  */
  /* here we can see that the size of the array is 12 but type is only 7 from 1 to 7. we just created
  only one more extra type in hash to store the frequency not size. although we can create hash of
  array size but at the empty places 0 will be displayed.

  atleast we have to create one extra size for hash map

  one more points to notice that all are in ascending order like in map value and after that whatever
  its corresponding pair

  */

  // through this also we can print the frequency
  for (int i = 0; i < 8; i++)
  {
    cout << hash[i] << " ";
  }
  cout << endl;
  /* output

     1 2 3 4 5 6 7  --> elements
   0 4 2 1 1 1 1 2  --> frequency

   */

  // by observing hashing just look like array
}

// vector<int> a = {45, 42, 11, 43, 42, 42};
// hash map will not be able to find the occurences of these vector as it support max to max only 12 elements.map is the best option always to find the frequency of an elements

// vector<char> a = {'a', 'b', 'c', 'a', 'b', 'b', 'z'};
// for this also hash map will not be able to count but map will solve it.