/**
 * Program to print number from 1 to 10 but skipping number 4 and 6
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
	
    int row; 
    // style 1
    for (row = 1; row <= 10; row++) {
    	if(row != 4 && row != 6)
        printf("%d\n",row);
    }
    
    // style 2
    for (row = 1; row <= 10; row++) {
    	if(row == 4 || row == 6)
    		continue;
        printf("%d\n",row);
    }
    
   return 0;
}
