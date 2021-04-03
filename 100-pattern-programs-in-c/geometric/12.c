/**
 * program to print inverted right angle triangle with number pattern
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
  1 1 1 1 1 1 1 1 1 1
  2 2 2 2 2 2 2 2 2
  3 3 3 3 3 3 3 3
  4 4 4 4 4 4 4
  5 5 5 5 5 5
  6 6 6 6 6
  7 7 7 7
  8 8 8
  9 9
  10
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 10;
    int counter = 1;
    
    for (row = 0; row < row_length; row++) {
        for (column = 0; column < row_length - row ; column++) {
        	printf("%d", counter);
        }
        counter++;
        printf("\n");
    }
    
   return 0;
}
