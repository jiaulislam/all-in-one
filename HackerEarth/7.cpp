#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int solve(int x){
    int result = 0;
    while(x){
        if (result > INT_MAX /10 || (result == INT_MAX / 10 && x%10 > INT_MAX%10))
            return 0;
        if (result < INT_MIN/10 || (result == INT_MIN / 10 && x%10 < INT_MIN%10))
            return 0;
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << solve(k) << endl;
    }
    return 0;
}