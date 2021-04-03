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
  3 2
  5 4 3
  7 6 5 4
  9 8 7 6 5
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int row_counter = 1;
    int column_counter = 1;
	int step_row_value = 1;
    
    for (row = 1; row <= row_length; row++) {
    	column_counter = step_row_value;
        for (column = 1; column <= row; column++) {
        	printf("%d ", column_counter);
        	column_counter--;
        }
        step_row_value += 2;
        printf("\n");
    }
    
   return 0;
}
