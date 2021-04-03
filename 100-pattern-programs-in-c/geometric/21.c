/**
 * program to print hollow rhombus with star pattern
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
           * * * * * * * * * * 
         *                  * 
        *                  * 
       *                  * 
      *                  * 
     *                  * 
    *                  * 
   *                  * 
  *                  * 
 * * * * * * * * * * 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 10;
    
    for (row = 0; row < row_length; row++) {
    	for (spaces = 1; spaces <= row_length - row ; spaces++) {
        	printf(" ");
        }
        for (column = 1; column <= row_length ; column++) {
        	if(column == 1 || column == row_length ) {
        		printf("*");	
			} else if(row == 0 || row == (row_length-1) ) {
        		printf("*");	
			} else {
				printf(" ");	
			}
        }
        printf("\n");
    }
    
   return 0;
}
