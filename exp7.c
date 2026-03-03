#include <stdio.h>

#define N 3

int main(void){
    int A[N][N];

    printf("Enter a %dx%d matrix:\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(scanf("%d",&A[i][j])!=1) return 1;

    printf("Upper triangular part:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j>=i) printf("%d ", A[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("Lower triangular part:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j<=i) printf("%d ", A[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}