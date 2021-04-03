/**
 * program to print the pattern given below
 * 
 * @author Shahrukh Khan <thesoftwareguy7@gmail.com>
 * @website https://www.thesoftwareguy.in
 * @youtube https://www.youtube.com/c/thesoftwareguy7
 * @facebook_Page https://www.facebook.com/thesoftwareguy7
 * @facebook_personal https://www.facebook.com/ShahrukhKhan90
 * @instagram https://www.instagram.com/thesoftwareguy7
 * @twitter https://www.twitter.com/thesoftwareguy7
 * 
 */
/*
 * outputs
  2
  3 5
  7 11 13
  17 19 23 29
  31 37 41 43 47
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int flag,check;
    int counter = 0;
    int last_found = 1;
    
    for (row = 1; row <= row_length; row++) {
    	counter = 0;
    	for (column = last_found + 1; column <= 1000; column++) {

        // check for prime number
        flag = 1;
        for (check = 2; check <= column / 2; check++) {
            if (column % check == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d ", column);
            counter++;
            if (row == counter) {
                last_found = column;
                break;
            }
        }
    	}
    	printf("\n");
	}
    
   return 0;
}
