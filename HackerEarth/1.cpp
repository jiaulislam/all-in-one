#include <bits/stdc++.h>

using namespace std;

char sVowel[5] = {'a', 'e', 'i', 'o', 'u'};
char cVowel[5] = {'A', 'E', 'I', 'O', 'U'};

void verify(string ss){

    unordered_map<char, int> umap;

    for (char i : ss)
    {
        umap[i]++;
    }
    int smlCount = 0;
    int lgCount = 0;
    for (char i : sVowel)
    {
        if (umap[i] >= 1)
        {
            smlCount++;
        }
    }
    for (char i : cVowel)
    {
        if (umap[i] >= 1)
        {
            lgCount++;
        }
    }
    if (smlCount >= 5 | lgCount >= 5)
    {
        cout << "lovely string\n";
    }
    else
    {
        cout << "ugly string\n";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0 ; i < t; i++){
        string ss;
        cin >> ss;
        verify(ss);
    }
    return 0;
}