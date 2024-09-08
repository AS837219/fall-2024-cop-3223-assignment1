//COP3223 Assignment 1: Fracturing
//Written by: Ashton Avant
//Date Written: 9/8/2024

#include <math.h>
#include <stdio.h>

#define PI 3.14159

double askForUserInput() {
    double input = 0;
    scanf("%lf", &input);
    return input;
}

double calculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    
    printf("Point #1 entered: x1 =  %lf", x1);
    printf("; y1 = %lf\n", y1);
    printf("Point #2 entered: x2 =  %lf", x2);
    printf("; y2 = %lf\n", y2);
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between the two points is %lf\n", distance);
    return distance;
}

double calculatePerimeter() {
    double perimeter = (calculateDistance() * PI);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    return 2.0;
}

double calculateArea() {
    double area = ((0.5 * (calculateDistance()) * (PI * PI)));
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 2.0;
}

double calculateWidth() {
    printf("The width of the city encompassed by your request is %lf\n", calculateDistance());
    return 1.0;
}

double calculateHeight() {
    printf("The height of the city encompassed by your request is %lf\n", calculateDistance());
    return 1.0;
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}