#include<stdio.h>
int main() {
    int a[3][3];
    int i, j, rowsum, colsum;

    printf("Enter the elements of 3*3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        rowsum = 0;
        for(j = 0; j < 3; j++) {
            rowsum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowsum);
    }

    for(j = 0; j < 3; j++) {
        colsum = 0;
        for(i = 0; i < 3; i++) {
            colsum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colsum);
    }
    return 0;

}  
        
    
    
       







