#include <stdio.h>

#define N 3

int main(void){
    int I[N][N];
    int isIdentity = 1;

    printf("Enter an %dx%d matrix:\n", N, N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(scanf("%d",&I[i][j])!=1) return 1;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if((i==j && I[i][j]!=1) || (i!=j && I[i][j]!=0)) {
                isIdentity = 0;
                break;
            }
        }
        if(!isIdentity) break;
    }

    if(isIdentity) printf("The matrix is an Identity matrix.\n");
    else printf("The matrix is NOT an Identity matrix.\n");
    return 0;
}