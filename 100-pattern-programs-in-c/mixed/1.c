/**
 * program to print the pattern given below
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
1 5 10 16 23
2 7 13 20 28
3 9 16 24 33
4 11 19 28 38
5 13 22 32 43
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int print_value;
    
    for (row = 1; row <= row_length; row++) {
    	print_value = row;
        for (column = 1; column <= row_length; column++) {
        	printf("%d ", print_value );
        	print_value += row+column+2;
        }
        printf("\n");
    }
    
   return 0;
}
