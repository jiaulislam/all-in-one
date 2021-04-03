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
1 3 5 7 9 
3 5 7 9 
5 7 9 
7 9 
9 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int start_value, inner_value;
    start_value = inner_value = 1;
    
    for (row = 0; row < row_length; row++, start_value+=2) {
    	inner_value = start_value;
        for (column = 1; column <= row_length-row; column++) {
        	printf("%d ", inner_value);
        	inner_value += 2;
        }
        printf("\n");
    }
    
   return 0;
}
