#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const float pi = 3.1415;

void print_values_flat(string type, float area, float perimeter) {
    cout << "Área do " << type << ": " << area << endl;
    cout << "Perímetro do " << type << ": " << perimeter << endl;
}

float triangle_area(float side) {
    return (side * sqrt(pow(side, 2) - pow((side / 2), 2))) / 2;
}

float triangle_perimeter(float side) {
    return side * 3;
}

void triangle(float side) {
    print_values_flat("triângulo", triangle_area(side), triangle_perimeter(side));
}

float rectangle_area(float base, float height) {
    return base * height;
}

float rectangle_perimeter(float base, float height) {
    return 2 * (base + height);
}

void rectangle(float base, float height) {
    print_values_flat(
        "retângulo",
        rectangle_area(base, height),
        rectangle_perimeter(base, height)
    );
}

float square_area(float side) {
    return pow(side, 2);
}

float square_perimeter(float side) {
    return 4 * side;
}

void square(float side) {
    print_values_flat("quadrado", square_area(side), square_perimeter(side));
}

float circle_area(float radius) {
    return pi * pow(radius, 2);
}

float circle_perimeter(float radius) {
    return 2 * pi * radius;
}

void circle(float radius) {
    print_values_flat("círculo", circle_area(radius), circle_perimeter(radius));
}
