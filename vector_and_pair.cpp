#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};

    vector<pair<int, int>> v; // initializing vector of pairs

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) // traversing
    {
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;

        v.push_back(p);
    }
    sort(v.begin(), v.end(), mycompare); // sorting

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++) // printing
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
