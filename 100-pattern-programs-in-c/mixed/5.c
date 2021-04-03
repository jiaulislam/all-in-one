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
  5 6 7 8 9
  4 5 6 7
  3 4 5
  2 3
  1
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int value;
    
    for (row = 0; row < row_length; row++) {
        for (column = row_length-row, value = column; column >= 1; column--, value++) {
        	printf("%d ", value);
        }
        printf("\n");
    }
    
   return 0;
}
