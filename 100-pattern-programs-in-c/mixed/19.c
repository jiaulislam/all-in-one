/**
 * Program to print half diamond with alphabet pattern
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
  A
  A B
  A B C
  A B C D
  A B C D E
  A B C D
  A B C
  A B
  A

 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 65;
    int print_value;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row; column++) {
        	print_value = (ascii_code_start + column )-1;
        	printf("%c ", print_value);
        }
        printf("\n");
    }
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row_length-row; column++) {
        	print_value = (ascii_code_start + column )-1;
        	printf("%c ", print_value);
        }
        printf("\n");
    }
    
   return 0;
}
