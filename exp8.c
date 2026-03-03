#include <stdio.h>

#define N 3

int main(void){
    int A[N][N];
    int sum = 0;

    printf("Enter a %dx%d matrix:\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(scanf("%d",&A[i][j])!=1) return 1;
        }

    for(int i=0;i<N;i++){
        sum += A[i][N-1-i];
    }

    printf("Sum of secondary diagonal = %d\n", sum);
    return 0;
}