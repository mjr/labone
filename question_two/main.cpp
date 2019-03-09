#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

double _sin_precision(double x, int k) {
    double _sin_precision = 0;
    int aux;
    for (int i = 0; i <= k; ++i) {
        aux = (i * 2) + 1;
        if (aux >= 3) {
          // cout << ">>> " << x;
          // cout << " | " << pow(-1, i);
          // cout << " * (" << x << "^" << aux;
          // cout << " / " << aux << "!)" << endl;

          _sin_precision += pow(-1, i) * (pow(x, aux) / factorial(aux));
        }
    }

    return x + _sin_precision;
}

double _sin(double x) {
    return x - (pow(x,3) / 6) + (pow(x,5) / 120);
}

double _cos(double x) {
    return 1 - (pow(x,2) / 2) + (pow(x,4) / 24);
}

int main(int argc, char const *argv[]) {
    double value;
    cout << "Digite um ângulo (em radianos): ";
    cin >> value;
    cout << "<cmath seno>: " << sin(value) << endl;
    cout << "<imple seno>: " << _sin(value) << endl;
    cout << "<cmath cosseno>: " << cos(value) << endl;
    cout << "<imple cosseno>: " << _cos(value) << endl;
    cout << "<imple taylor seno>: " << _sin_precision(value, 5) << endl;

    return 0;
}
