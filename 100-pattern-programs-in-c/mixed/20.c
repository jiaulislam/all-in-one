/**
 * program to print pyramid with alphabet patterns
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
      B A B 
    C B A B C 
  D C B A B C D 
E D C B A B C D E 
 */

#include <stdio.h>	

int main()
{
	
    int row, column1, column2, spaces; 
    int row_length = 5;
    int ascii_code_start = 65;
    int print_value;
    
    for (row = 1; row <= row_length; row++) {
    	for (spaces = 1; spaces <= row_length-row; spaces++) {
    		printf("  ");
    	}
        for (column1 = row; column1 >= 1; column1--) {
        	print_value = (ascii_code_start + column1 )-1;
        	printf("%c ", print_value);
        }
        for (column2 = 1; column2 < row; column2++) {
        	print_value++;
        	printf("%c ", print_value);
        }
        printf("\n");
    }
    
   
   return 0;
}
