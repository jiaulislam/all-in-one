
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
E 
D E 
C D E 
B C D E 
A B C D E 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 65;
    int print_value;
    
    for (row = row_length; row >= 1; row--) {
        for (column = row; column <= row_length; column++) {
        	print_value = (ascii_code_start + column )-1;
        	printf("%c ", print_value);
        }
        printf("\n");
    }
    
   return 0;
}
