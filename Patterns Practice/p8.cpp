/*
                  1
                1 2
              1 2 3
            1 2 3 4
          1 2 3 4 5
        1 2 3 4 5 6
      1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8
  1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10

print the pattern on screen 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++ ){
            cout<< k;
        }
        cout << endl;
    }

    return 0;
}