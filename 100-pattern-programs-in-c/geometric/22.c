/**
 * program to print pyramid with star pattern
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
         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
    * * * * * * 
   * * * * * * * 
  * * * * * * * * 
 * * * * * * * * * 
* * * * * * * * * * 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 10;
    
    for (row = 1; row <= row_length; row++) {
    	for (spaces = 0; spaces < row_length - row ; spaces++) {
        	printf(" ");
        }
        for (column = 1; column <= row ; column++) {
        	printf("* ");
        }
        printf("\n");
    }
    
   return 0;
}
