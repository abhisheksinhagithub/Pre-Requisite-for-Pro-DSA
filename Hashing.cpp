// Hashing  --> means prestoring / fetching

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // array input
    }

    // Precompute
    int hash[n] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q; // no. of query
    cin >> q;

    // this while loop is for the no. of query user asked
    while (q--)
    {
        int num;
        cin >> num; // number is asked from the user that how many times this appear
        // fetch
        cout << hash[num] << endl;
    }

    // character hashing
    string s = "abcabz";
    int hash[26] = {0}; // here we know that letter are only 26 and at all indexes 0 is stored

    // precompute
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++; // hash[s[i]-'a']  means s[i] means a and most important when we subtract from character i.e, with the ascii values it will give us the index value of the hash where the frequency is stored
    }

    int q;
    cin >> q;

    while (q--)
    {
        char ch;
        cin >> ch;
        // fetching
        cout << hash[ch - 'a'] << " "; // by doing this only we can know that at which index our character is stored and when we subtract with 'a' then it give us the index value of hash and through this only we access the answer. suppose we have capital letter then we would have subtracted with 'A'.
        // }

        // hash[26] for letter because we know that it is just a lower case letter but if we don't know then we can store hash[256] also as we know only 256 character are there

        // so in this case if we want to apply we can directly write hash[s[i]] because all the character are placed at their own indexes

        //  hash[s[i]]++
        // hash[ch ]

        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;

        // PRECOMPUTE
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        int q;
        cin >> q;

        while (q--)
        {
            int num;
            cin >> num;

            // fetch
            cout << mp[num] << " ";
        }

        // one important point to note is that the precomputation by map can also be done paraleely along with input. this doesn't affect the answer

        // for(int i=0; i<n; i++)
        // {
        //     cin>>arr[i];
        //     mp[arr[i]]++;
        // }

        // both storing and fetching in map takes O(log N) in all cases either it is best, worst or average

        // unordered_map can not give answer in sorted order like the map (which is known as ordered map)
        // But there is difference that in unordered map the average and best time complexity is O(1) i.e constant one in storing and fetching but in worst case it takes linear time i,.e O(N)  where n always means that the no. of elements in map

        // but we have to use mostly unordered_map and if time limits exceed then we can use map
        // in ordered map the key can be anything means any data structure but in unordered the key cannot be pair, vector etc it must pe individual data types
    }
}