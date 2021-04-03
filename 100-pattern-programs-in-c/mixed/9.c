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
   232
  34543
 4567654
567898765
 */

#include <stdio.h>	

int main()
{
	
    int row, column1, column2, spaces; 
    int row_length = 5;
    int value_print = 1;
    
    for (row = 1; row <= row_length; row++) {
    	for (spaces = 1; spaces <= row_length-row; spaces++) {
    		printf(" ");
    	}
    	value_print = row;
        for (column1 = 1; column1 <= row; column1++) {
        	printf("%d", value_print);
        	value_print++;
        }
        value_print -= 2;
        for (column2 = 1; column2 < row; column2++) {
        	printf("%d", value_print);
        	value_print--;
        }
        printf("\n");
    }
    
   return 0;
}
