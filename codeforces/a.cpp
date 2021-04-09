#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long x,y,c,a,b;
        cin >> x >> y >> c;
        a = (c-1)/x;
        b = (c-1)%x;
        cout << (b)*y + (a+1) << endl;
    }

    return 0;
}