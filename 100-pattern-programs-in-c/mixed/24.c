
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
  1
  3 2
  4 5 6
  10 9 8 7
  11 12 13 14 15
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int odd = 1;
    int even = 0;
    
    for (row = 1; row <= row_length; row++) {
    	even = odd + row - 1;
        for (column = 1; column <= row; column++) {
        	if(row % 2 == 0){
        		printf("%d ", even);
			} else {
				printf("%d ", odd);
			}
			odd++;
        	even--;
        }
        printf("\n");
    }
    
   return 0;
}
