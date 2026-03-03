#include <stdio.h>
#define N 3  // You can change 3 to any desired matrix size

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

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Sum (A+B):\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}









