#include <stdio.h>

#define N 3

int main(void){
    int A[N][N];
    printf("Enter a %dx%d matrix:\n", N, N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(scanf("%d",&A[i][j])!=1) return 1;

    // Simple spiral traversal starting top-left, clockwise
    int top = 0, bottom = N-1, left = 0, right = N-1;
    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++) printf("%d ", A[top][j]);
        top++;
        for(int i = top; i <= bottom; i++) printf("%d ", A[i][right]);
        right--;
        if(top <= bottom){
            for(int j = right; j >= left; j--) printf("%d ", A[bottom][j]);
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--) printf("%d ", A[i][left]);
            left++;
        }
    }
    printf("\n");
    return 0;
}