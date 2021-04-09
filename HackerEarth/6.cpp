
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}
bool ans(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isVowel(str[i]))
        {
            return true;
        }
    }
    return false;
}
string maxVowelSubString(
    string str, int K)
{
    int N = str.length();

    int pref[N];

    for (int i = 0; i < N; i++)
    {
        if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
            pref[i] = 1;

        // Otherwise, store 0
        else
            pref[i] = 0;

        // Process the prefix array
        if (i)
            pref[i] += pref[i - 1];
    }

    int maxCount = pref[K - 1];

    string res = str.substr(0, K);

    for (int i = K; i < N; i++)
    {

        int currCount = pref[i] - pref[i - K];

        if (currCount > maxCount)
        {

            maxCount = currCount;
            res = str.substr(i - K + 1, K);
        }

        else if (currCount == maxCount)
        {

            string temp = str.substr(
                i - K + 1, K);

            if (temp < res)
                res = temp;
        }
    }

    // Return the result
    if (ans(res)){
        return res;
    }else{
        return "Not found!";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int k;
    cin >> k;
    cout << maxVowelSubString(str, k);
    return 0;
}