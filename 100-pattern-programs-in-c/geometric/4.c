
/**
 * Program to print square with alphabet pattern
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
  A A A A A
  B B B B B
  C C C C C
  D D D D D
  E E E E E
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
	int column_length = 5; 
	int ascii_code_start = 65;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= column_length; column++) {
        	printf("%c", ascii_code_start);
        }
        ascii_code_start++;
        printf("\n");
    }
    
   return 0;
}
