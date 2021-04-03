#include <bits/stdc++.h>

using namespace std;

/*
Output :
		*
	  * *
    * * *
  * * * *
* * * * *_

 print the pattern on the screen.
 */


int main(){
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i; j++){
			cout << " ";
		}
		for (int k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}