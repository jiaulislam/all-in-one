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
1 2 3 4 5 
  2 3 4 5 
    3 4 5 
      4 5 
        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 5;
    int value;
    
    // upper section
    for (row = 0; row < row_length; row++) {
    	for (spaces = 0; spaces < row; spaces++) {
    		printf(" ");
    	}
        for (column = 0, value = row+1; column < row_length-row; column++, value++) {
        	printf("%d", value);
        }
        printf("\n");
    }
    
    // lower section
    for (row = 1; row < row_length; row++) {
    	for (spaces = 1; spaces < row_length-row; spaces++) {
    		printf(" ");
    	}
        for (column = 0, value = row_length-row; column <= row; column++, value++) {
        	printf("%d", value);
        }
        printf("\n");
    }
    
   return 0;
}
