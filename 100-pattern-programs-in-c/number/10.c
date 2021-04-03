/**
 * program to print number zero with star pattern
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
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 10;
	int column_length = 10; 
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= column_length; column++) {
        	if(row == 1 || row == row_length ) {
        		printf("*");	
			} else if(column == 1 || column == column_length ) {
        		printf("*");	
			} else {
				printf(" ");	
			}
        	
        }
        printf("\n");
    }
    
   return 0;
}
