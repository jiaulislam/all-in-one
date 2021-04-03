
/**
 * program to print the alphabet pattern given below
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
A 
B C 
D E F 
G H I J 
K L M N O
 */
#include <stdio.h>	

int main()
{
	
    int row, column; 
    int row_length = 5;
    int ascii_code_start = 65;
    
    for (row = 1; row <= row_length; row++) {
        for (column = 1; column <= row; column++) {
        	printf("%c ", ascii_code_start);
        	ascii_code_start++;
        }
        printf("\n");
    }
    
   return 0;
}
