
/**
 * Program to print the alphabet pattern given below
 * 
 * @author Shahrukh Khan <thesoftwareguy7@gmail.com>
 * @website https://www.thesoftwareguy.in
 * @youtube https://www.youtube.com/c/thesoftwareguy7
 * @facebook https://www.facebook.com/ShahrukhKhan90
 * @instagram https://www.instagram.com/thesoftwareguy7
 * @twitter https://www.twitter.com/thesoftwareguy7
 * 
 */
/*
 * outputs
  A
  B A
  C B A
  D C B A
  E D C B A
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 65;
    
    for (row = 1; row <= row_length; row++) {
        for (column = row; column >= 1; column--) {
        	printf("%c ", (ascii_code_start + column)-1 );
        }
        printf("\n");
    }
    
   return 0;
}
