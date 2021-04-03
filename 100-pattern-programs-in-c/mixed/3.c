/**
 * program to print Pascal triangle
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
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
1 5 10 10 5 1 
 */
#include <stdio.h>	

int main()
{
	
    int row, column, spaces; 
    int row_length = 6;
    int v;
    
    for (row = 0; row < row_length; row++) {
    	for (spaces = 1; spaces < row_length - row ; spaces++) {
        	printf(" ");
        }
        for (column = 0; column <= row ; column++) {
        	if(column == 0 || row == 0) {
        		v = 1;
			} else {
				v = v * (row-column + 1)/column;
			}
        	printf("%d ",v);
        }
        printf("\n");
    }
    
   return 0;
}
