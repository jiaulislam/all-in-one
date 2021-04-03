/**
 * program to print the alphanumeric pattern given below
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
A1 B2 C3 D4 E5 
B2 C3 D4 E5 
C3 D4 E5 
D4 E5 
E5 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 65;
    char print_value;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 0; column <= row_length-row; column++) {
        	//print_value = (ascii_code_start + column )-1;
        	printf("%c", (ascii_code_start+row+column)-1);
        	printf("%d", (row+column));
        	printf(" ");
        }
        printf("\n");
    }
	    
   return 0;
}
