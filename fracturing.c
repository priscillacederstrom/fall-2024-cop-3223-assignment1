

float x1, y1, x2, y2;
float width, height, area;

int processCalculations();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int processCalculations() {
    return 0; 
}

double calculateDistance() {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

double calculatePerimeter() {
    double perimeter = 2 * (width + height);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 2.0; // Difficulty rating
}

double calculateArea() {
    area = width * height;
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 2.0;
}

double calculateWidth() {
    if (height == 0) return -1;
    width = area / height;
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    return 2.0; 
}

double calculateHeight() {
    if (width == 0) return -1; 
    height = area / width;
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return 2.0; 
}

double askForUserInput() {
    double input;
    printf("Enter value: ");
    scanf("%lf", &input);
    return input;
}

int main() {

    printf("Enter coordinates for Point #1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter coordinates for Point #2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    printf("Enter width and height of the rectangle:\n");
    width = askForUserInput();
    height = askForUserInput();
    printf("Enter area of the rectangle:\n");
    area = askForUserInput();

    processCalculations();
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
