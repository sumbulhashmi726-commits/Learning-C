#include<stdio.h>
int main() {
    int length;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    int breadth;
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if(area > perimeter) {
        printf("Area is greater than Perimeter");
    }
    else {
        printf("Perimeter is not greater than perimeter");
    }
    return 0;
}
