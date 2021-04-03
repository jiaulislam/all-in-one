/**
 * Program to print 4 X 3 grid with Hello World 
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
#include <stdio.h>	

int main()
{
	
    int row, column; 
    for (row = 1; row <= 4; row++) {
    	printf("Hello %d ",row);
    	for(column = 1; column <= 3; column++) {
    		printf("World %d ",column);
		}
		printf("\n");
    }
    
   return 0;
}
