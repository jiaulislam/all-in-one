/**
 * program to print Floyd triangle
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
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int counter = 1;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row; column++) {
        	printf("%d ", counter);
        	counter++;
        }
        printf("\n");
    }
    
   return 0;
}
