/*
	* * * * *
	*       *
	*       *
	*       *
	* * * * *

	print the square box on screen
*/


#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	for (int row = 1; row <= n; row++){
		for (int col = 1; col <= n; col++){
			if (row==1 | row==n){
				cout << "*";
			}else if (col == 1 | col==n){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}