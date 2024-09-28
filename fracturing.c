#include <stdio.h>
#include <math.h>

//defining functions
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

double x1, y1, x2, y2;

int main(int argc, char **argv) {
    printf("Welcome to the Geometry Calculator!\n");
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; 
}
//getting distance
double calculateDistance() {
    printf("Let's find the distance between two points.\n");
    printf("Put in the coordinates for Point #1:\n");
    printf("x1: ");
    x1 = askForUserInput();
    printf("y1: ");
    y1 = askForUserInput();
    
    printf("Put in the coordinates for Point #2:\n");
    printf("x2: ");
    x2 = askForUserInput();
    printf("y2: ");
    y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f units.\n", distance);
    
    return distance;
}
//getting perimeter
double calculatePerimeter() {
    printf("\nFinding the perimeter of the rectangle defined by your points...\n");
    
    double width = calculateWidth();
    double height = calculateHeight();
    
    double perimeter = 2 * (width + height);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the rectangle is %.2f units.\n", perimeter);
    
    return 2.0; 
}
//getting area
double calculateArea() {
    printf("\nFinding the area of the rectangle defined by your points...\n");
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the rectangle is %.2f square units.\n", area);
    
    return 2.0; 
}
//getting width
double calculateWidth() {
    double width = x2 - x1;
    if (width < 0) width = -width; 
    printf("Finding the width...\n");
    printf("The width of the rectangle is %.2f units.\n", width);
    
    return width;
}
//getting height
double calculateHeight() {
    double height = y2 - y1;
    if (height < 0) height = -height; 
    printf("Finding the height...\n");
    printf("The height of the rectangle is %.2f units.\n", height);
    return height;
}

double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}
