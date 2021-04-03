#include <iostream>

using namespace std;
void triangle(int n);
void reverseTriangle(int n);
void rightTriagnle(int n);
void upsideTraingle(int n);

int main(){

	int n;
	cin >> n;

	// runner funciton here
	upsideTraingle(n);
	

	return 0;
}

void triangle(int n){

	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	/*
	output:
	------

	* 
	* * 
	* * * 
	* * * * 
	* * * * * 
	* * * * * * 
	* * * * * * * 
	* * * * * * * * 
	* * * * * * * * * 
	* * * * * * * * * * 

	*/
}

void reverseTriangle(int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n-i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

void rightTriagnle(int n){
	for (int i = 1; i <= n; i++){
		for (int j = n-i; j > 0; j--){
			cout << " ";
		}
		for (int j =1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}

	/*
	output:
	------

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

	*/
}

void upsideTraingle(int n){

	for (int i = n; i >= 1; i--){
		for (int j = n-i; j > 0; j--){
			cout << " ";
		}
		for (int k = i; k > 0; k--){
			cout << "*";
		}
		cout << endl;
	}
}