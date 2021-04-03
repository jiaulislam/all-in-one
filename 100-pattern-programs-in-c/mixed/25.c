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
  2 4
  7 11 16
  22 29 37 46
  56 67 79 92 106
 */

#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int step_counter = 0;
    int print_value = 1;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row; column++) {
        	printf("%d ", print_value);
        	step_counter++;
        	print_value += step_counter;
        	
        }
        printf("\n");
    }
    
   return 0;
}
