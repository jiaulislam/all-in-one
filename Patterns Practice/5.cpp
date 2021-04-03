/*
    *
   * *
  * * *
 * * * *
* * * * *_
print the pattern on the screen
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	// 1st my approch
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i; j++){
			cout << " ";
		}
		for (int k = 1; k <= i; k++){
			cout << "* ";
		}
		cout << endl;
	}

	// 2nd book approch
	// int i, j, k, t=0;
	// for(i=1; i<=5; i++)
	// {
	// 	for(k=t; k<5; k++)
	// 	{
	// 		printf(" ");
	// 	}
	// 	for(j=0; j< i; j++)
	// 	{
	// 		printf(" * ");
	// 		t = t + 1;
	// 	}
	// 	printf("\n");
	// }

	return 0;
}