/**
 * program to print mirror right angle triangle with number pattern
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
                1 2 
              1 2 3 
            1 2 3 4 
          1 2 3 4 5 
        1 2 3 4 5 6 
      1 2 3 4 5 6 7 
    1 2 3 4 5 6 7 8 
  1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 
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
        	printf("%d", column);
        }
        printf("\n");
    }
    
   return 0;
}
