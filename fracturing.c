//COP3223 Assignment 1: Fracturing
//Written by: Ashton Avant
//Date Written: 9/8/2024

#include <math.h>
#include <stdio.h>

#define PI = 3.14159

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
    printf("The distance between the two points is %lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
    return 0;
}

double calculatePerimeter() {
    
}

double calculateArea() {
    
}

double calculateWidth() {
    
}

double calculateHeight() {
    
}

int main(int argc, char **argv) {
    calculateDistance();
    //calculatePerimeter();
    //calculateArea();
    //calculateWidth();
    //calculateHeight();

    return 0;
}