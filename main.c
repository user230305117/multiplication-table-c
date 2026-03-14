#include <stdio.h>
#include <stdlib.h>

/* Times Table Generator
 * This program generates and displays a 10x10 multiplication table.
 * the first row and column serve as headers (1–10),
 * and each cell contains the product of its row and column index. */

int main()
{
    // 11x11 array to include header row (index 0) and values 1–10
    int TimesTable[11][11];
    int i, j;

    // top-left corner is blank
    TimesTable[0][0] = 0;

    // fill the first column with row headers (1 to 10)
    for(i = 1; i < 11; i++){
        TimesTable[i][0] = i;
    }

    // fill the first row with column headers (1 to 10)
    for(j = 1; j < 11; j++){
        TimesTable[0][j] = j;
    }

    // populate the table body with multiplication results
    for(i = 1; i < 11; i++){
        for(j = 1; j < 11; j++){
            TimesTable[i][j] = i * j;
        }
    }

    // print the full times table to the console
    for(i = 0; i < 11; i++){
        for(j = 0; j < 11; j++){
            // skip the top-left corner cell (print blank space instead)
            if(i == 0 && j == 0){
                printf("    ");
            }
            else{
                // print each value with a width of 4 for alignment
                printf("%4d", TimesTable[i][j]);
            }
        }
        // move to the next row after printing all columns
        printf("\n");
    }
    return 0;
}
