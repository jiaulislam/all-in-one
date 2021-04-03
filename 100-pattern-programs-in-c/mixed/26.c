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
  12345
  23451
  34521
  45321
  54321
 */

#include <stdio.h>	

int main()
{
	
    int row, column1, column2; 
    int row_length = 5;
    
    for (row = 1; row <= row_length; row++) {
        for (column1 = row; column1 <= row_length; column1++) {
        	printf("%d", column1);        	
        }
        for (column2 = row-1; column2 >= 1; column2--) {
        	printf("%d", column2);
        }
        printf("\n");
    }
    
   return 0;
}
