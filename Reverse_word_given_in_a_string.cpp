#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string reverseWords(string S)
{
    string ans = "";
    int j = S.length() - 1;
    for (int i = S.length() - 1; i >= 0; i--)
    {
        if (S[i] == '.' || i == 0)
        {
            if (i == 0)
            {
                ans = ans + S.substr(i, j - i + 1);
            }
            else
            {
                ans = ans + S.substr(i + 1, j - i) + ".";
            }
            j = i - 1;
        }
    }
    return ans;
}

int main()
{

    cout << reverseWords("i.like.this.program.very.much");

    return 0;
}
// "EPY2giL"