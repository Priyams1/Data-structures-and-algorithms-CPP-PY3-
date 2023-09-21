#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumofsquares(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return sumofsquares(n - 1) + n * n;  // recursive call for n square
}

int main()
{
    int n;
    cin >> n;
    cout << sumofsquares(n) << endl;
    return 0;
}
