#include<stdio.h>
int main() {
    int n;
    printf("Enter no of num: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        int a;
        for(int j = 1; j <= n; j++) {
            printf("%d", j);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;

} 