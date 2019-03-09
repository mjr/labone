#include <iostream>
#include <string>
#include "geometry.h"
using namespace std;

void menu(string type, float args[]) {
    if (type.compare("triangulo") == 0) {
        triangle(args[0]);
    } else if (type.compare("retangulo") == 0) {
        rectangle(args[0], args[1]);
    } else if (type.compare("quadrado") == 0) {
        square(args[0]);
    } else if (type.compare("circulo") == 0) {
        circle(args[0]);
    } else if (type.compare("piramide") == 0) {
        pyramid(args[0], args[1], args[2]);
    } else if (type.compare("cubo") == 0) {
        cube(args[0]);
    } else if (type.compare("paralelepipedo") == 0) {
        parallelepiped(args[0], args[1], args[2]);
    } else if (type.compare("esfera") == 0) {
        ball(args[0]);
    } else {
        cout << "Operação inválida!" << endl;
    }
}

void help() {
    cout << "PARA AS FIGURAS PLANA SIGA AS INSTRUÇÕES:" << endl;
    cout << "Passe algum argumento (como nos exemplos abaixo):" << endl;
    cout << "./program 'triangulo' 'lado do triangulo'" << endl;
    cout << "./program 'retangulo' 'lado1 do retangulo' 'lado2 do retangulo'" << endl;
    cout << "./program 'quadrado' 'lado do quadrado'" << endl;
    cout << "./program 'circulo' 'raio do circulo'" << "\n" << endl;
    cout << "PARA AS FIGURAS ESPACIAL SIGA AS INSTRUÇÔES:" << endl;
    cout << "./program 'piramide' 'area da base' 'area lateral' 'altura'" << endl;
    cout << "./program 'cubo' 'lado do cubo'" << endl;
    cout << "./program 'paralelepipedo' 'lado1 do paralelepipedo' 'lado2 do paralelepipedo' 'lado3 do paralelepipedo'" << endl;
    cout << "./program 'esfera' 'raio da esfera'" << endl;
}

int main(int argc, char const *argv[]) {
    if (argc > 1) {
        string type = argv[1];
        float args[argc];

        for (int i = 0; i < argc - 2; i++) {
            args[i] = stof(argv[i + 2]);
        }

        menu(type, args);
    } else {
        help();
    }

    return 0;
}
