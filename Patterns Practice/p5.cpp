/*
Print a rectangle shape 
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n/2; i++){
        for (int j = 1; j < n; j++){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}