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
0 
1 0 1 
2 1 0 1 2 
3 2 1 0 1 2 3 
4 3 2 1 0 1 2 3 4 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int print_value = 0;
    
    for (row = 0; row < row_length; row++) {
    	print_value += row;
        for (column = row; column >= 0; column--) {
        	printf("%d ", column);
        }
        for (column = 1; column <= row; column++) {
        	printf("%d ", column);
        }
        printf("\n");
    }
    
   return 0;
}
