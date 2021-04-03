/**
 * Program to print 3 X 5 grid with cell numbers 
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
    for (row = 1; row <= 3; row++) {
    	for(column = 1; column <= 4; column++) {
    		printf("R%dC%d ",row, column);
		}
		printf("\n");
    }
    
   return 0;
}
