/**
 * Program to print the alphabet pattern given below
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
  Z Y X W V
  Y X W V
  X W V
  W V
  V
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 90;
    int print_value;
    
    for (row = 0; row < row_length; row++) {
    	print_value = ascii_code_start - row;
        for (column = 0; column < row_length-row; column++) {
        	printf("%c ", print_value);
        	print_value--;
        }
        printf("\n");
    }
    
   return 0;
}
