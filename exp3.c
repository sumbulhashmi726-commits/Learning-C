#include <stdio.h>

#define N 3

int main(void){
    int a[N][N], t[N][N];

    printf("Enter a %dx%d matrix:\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(scanf("%d",&a[i][j])!=1){
                printf("Invalid input.\n");
                return 1;
            }
            t[j][i] = a[i][j];
        }

    printf("Transpose:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}

    