#include<stdio.h>
//Area of a square
int main(){
    int side;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    printf("Area of the square = %d\n", side * side);
    return 0;
}

//Area Of Circle
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Radius of the circle = %f\n", 3.14 * radius * radius);
    return 0;
}