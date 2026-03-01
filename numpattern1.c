#include<stdio.h>
int main() {
    int n;
    printf("Enter no of num: ");
    scanf("%d", &n);
    int a;
    for(int i = 1; i <= n; i++) {
        int a;
        for(int j = 1; j <= i; j++) {
            printf("%d", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;

} 