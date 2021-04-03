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
  1
  1 0
  1 0 1
  1 0 1 0
  1 0 1 0 1
 */

#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row; column++) {
        	printf("%d", (column % 2));        	
        }
        printf("\n");
    }
    
   return 0;
}
