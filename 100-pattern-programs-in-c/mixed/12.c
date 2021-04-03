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
1 2 3 4 5 5 4 3 2 1 
1 2 3 4     4 3 2 1 
1 2 3         3 2 1 
1 2             2 1 
1                 1 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 5;
    
    for (row = 0; row < row_length; row++) {
    	// left section
    	for (column = 1; column <= row_length-row; column++) {
        	printf("%d", column);
        }
    	for (spaces = 0; spaces < row; spaces++) {
    		printf(" ");
    	}
    	
    	// right section
    	for (spaces = 0; spaces < row; spaces++) {
    		printf(" ");
    	}
    	for (column = row_length-row; column >= 1; column--) {
        	printf("%d", column);
        }
       
        printf("\n");
    }
    
    
   return 0;
}
