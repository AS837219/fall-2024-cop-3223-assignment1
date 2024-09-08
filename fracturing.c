//COP3223 Assignment 1: Fracturing
//Written by: Ashton Avant
//Date Written: 9/8/2024

#include <stdio.h>
#include <math.h>

#define PI = 3.14159

double calculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    
    printf("Point #1 entered: x1 =  %f", x1, "; y1 = %f\n", y1);
    printf("Point #2 entered: x2 =  %f", x2, "; y2 = %f\n", y2);
    printf("The distance between the two points is %d\n", sqrt((pow(x1, 2) + pow(x2, 2)) + (pow(y1, 2) + pow(y2, 2))));
}

double calculatePerimeter() {
    
}

double calculateArea() {
    
}

double calculateWidth() {
    
}

double calculateHeight() {
    
}

double askForUserInput() {
    return scanf("%f");
}

int main(int argc, char **argv) {
    calculateDistance();
    //calculatePerimeter();
    //calculateArea();
    //calculateWidth();
    //calculateHeight();

    return 0;
}