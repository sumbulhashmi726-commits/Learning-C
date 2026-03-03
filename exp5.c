#include <stdio.h>

#define N 3

int main(void){
    int A[N][N], B[N][N], C[N][N];

    printf("Enter matrix A (%dx%d):\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(scanf("%d",&A[i][j])!=1) return 1;
        }

    printf("Enter matrix B (%dx%d):\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(scanf("%d",&B[i][j])!=1) return 1;
        }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            C[i][j] = 0;
            for(int k=0;k<N;k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Product (A*B):\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    


















