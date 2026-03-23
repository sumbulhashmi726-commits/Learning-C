#include <stdio.h>

int main() {
    int i,j,n=5;
    int val;

    for(i=0;i<n;i++) {
        val=1;
        for(j=0;j<=i;j++) {
            printf("%d ",val);
            val = val*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
