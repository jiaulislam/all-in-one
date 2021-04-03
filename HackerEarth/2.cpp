#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    cin >> l;
    int n;
    cin >> n ;
    while(n--){
        int w, h;
        cin >> w >> h;
        if (w < l | h < l){
            cout << "UPLOAD ANOTHER\n";
        }
        else{
            if (w == h){
                cout << "ACCEPTED\n";
            }else if (w*h > l*l){
                cout << "CROP IT\n";
            }
        }
    }
    return 0;
}