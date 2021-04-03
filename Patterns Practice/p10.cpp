/*
*
*     *
*       *
*        *
*          *
*            *
*             *
*              *
*               *
* * * * * * * * *

*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++){
            if (j == 1)
                cout << "*";
        }
        for(int space = 0 ; space < i; space++){
            cout << " ";
        }
        cout<< "*" << endl;
    }
    for(int i = 1; i < n -2; i++)
        cout << "* ";
    cout << endl;
    return 0;
}