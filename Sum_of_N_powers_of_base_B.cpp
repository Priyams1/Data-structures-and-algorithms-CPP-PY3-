#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumofpowers(int b, int n)
{
    int sum = 0;

    if (n == 0)
    {
        return 1;
    }

    return 1 + b * sumofpowers(b, n - 1);
}

int main()
{
    int b, n;
    cin >> b >> n;
    cout << sumofpowers(b, n) << endl;
    return 0;
}