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
1 7 12 16 19 
2 8 15 23 
3 9 14 
4 10 
5 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int counter_value, print_value;
    
    for (row = 1; row <= row_length; row++) {
    	counter_value = 6;
    	print_value = row;
    	printf("%d ", print_value);
        for (column = 1; column <= row_length-row; column++) {
        	print_value += counter_value; 
        	printf("%d ", print_value);
        	counter_value = (row%2 == 0) ? counter_value+1 : counter_value-1 ;
        }
        printf("\n");
    }
    
   return 0;
}
