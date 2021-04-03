/**
 * Program to print inverted hollow pyramid with star pattern
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
 *               * 
  *             * 
   *           * 
    *         * 
     *       * 
      *     * 
       *   * 
        * * 
         * 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 10;
    
    for (row = 0; row < row_length; row++) {
    	for (spaces = 0; spaces < row ; spaces++) {
        	printf(" ");
        }
        for (column = 0; column < row_length - row ; column++) {
        	if(row == 0 ) {
        		printf("* ");	
			} else if(column == 0 || column == (row_length - row)-1 ) {
        		printf("* ");	
			} else {
				printf("  ");	
			}
        }
        printf("\n");
    }
    
   return 0;
}
