#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const float pi = 3.1415;

void print_values_spatial(string type, float area, float volume) {
    cout << "Área do " << type << ": " << area << endl;
    cout << "Volume do " << type << ": " << volume << endl;
}

float pyramid_area(float abase, float aside) {
    return abase + aside;
}

float pyramid_volume(float abase, float height) {
    return (1/3) * abase * height;
}

void pyramid(float abase, float aside, float height) {
    print_values_spatial(
        "piramide",
        pyramid_area(abase, aside),
        pyramid_volume(abase, height)
    );
}

float cube_area(float side) {
    return 6 * pow(side, 2);
}

float cube_volume(float side) {
    return pow(side, 3);
}

void cube(float side) {
    print_values_spatial("cubo", cube_area(side), cube_volume(side));
}

float parallelepiped_area(float side1, float side2, float side3) {
    return 2 * side1 * side2 + 2 * side1 *side3 + 2 * side2 *side3;
}

float parallelepiped_volume(float side1, float side2, float side3) {
    return side1 * side2 * side3;
}

void parallelepiped(float side1, float side2, float side3) {
    print_values_spatial(
        "paralelepipedo",
        parallelepiped_area(side1, side2, side3),
        parallelepiped_volume(side1, side2, side3)
    );
}

float ball_area(float radius) {
    return 4 * pi * pow(radius, 2);
}

float ball_volume(float radius) {
    return (4/3) * pi * pow(radius, 2);
}

void ball(float radius) {
    print_values_spatial("esfera", ball_area(radius), ball_volume(radius));
}
