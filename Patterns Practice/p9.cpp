/*
***************
 *            *
  *           *
   *          *
    *         *
     *        *
      *       *
       *      *
        *     *
         *    *
          *   *
           *  *
             * 

print the pattern in display
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    // int n;
    // cin >> n;

    // // Top Column
    // for(int i = 1; i<=1; i++){
    //   for(int j = 1; j<=n+1; j++){
    //     cout << "* ";
    //   }
    //   cout << endl;
    // }

    // // Angle Star's
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "  ";
    //     }
    //     cout << "*" ;

    //     cout << endl;
    // }
    int row, column, spaces;
    int row_length = 10;
    for (row = 0; row < row_length; row++)
    {
        for (spaces = 0; spaces < row; spaces++)
        {
            printf(" ");
        }
        for (column = 0; column < row_length - row; column++)
        {
            if (row == 0)
            {
                printf("*");
            }
            else if (column == 0 || column == (row_length - row) - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}