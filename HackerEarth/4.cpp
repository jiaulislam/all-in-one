#include <bits/stdc++.h>

const long long MOD_SIZE = 1e9+7;

using namespace std;
int arr[10010];

int main(){
    int n;
    long long answer = 1;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        answer = (answer * arr[i]) % MOD_SIZE;
    }
    cout << answer << endl;
}