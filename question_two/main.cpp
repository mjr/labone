#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long int factorial(int n) {
    long int factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int check_precision(long double diff, double value) {
    if (diff <= value) {
      return 1;
    } else {
      return -1;
    }
}

long double _sin_precision(long double x) {
    long double _sin_precision = 0;
    long double _sin_precision_temp = 0;
    int aux, check_a, check_b, check_c;
    // int temp;

    int i = 1;
    do {
        aux = (i * 2) + 1;
        if (aux >= 3) {
          // cout << ">>> " << x;
          // temp = pow(-1, i);
          //
          // if (temp == -1)
          //     cout << " | " << temp;
          // else
          //     cout << " |  " << temp;
          // cout << " * (" << x << "^" << aux;
          // cout << " / " << aux << "!)" << endl;

          _sin_precision += pow(-1, i) * (pow(x, aux) / factorial(aux));
          _sin_precision_temp = x + _sin_precision;

          check_a = check_precision(pow((_sin_precision_temp - sin(x)), 2), 0.0001);
          check_b = check_precision(pow((_sin_precision_temp - sin(x)), 2), 0.00001);
          check_c = check_precision(pow((_sin_precision_temp - sin(x)), 2), 0.000001);

          // cout << " ->> a | " << check_a << endl;
          // cout << " ->> b | " << check_b << endl;
          // cout << " ->> c | " << check_c << endl;
          // cout << "N = " << i << " (O menor valor de N para que a, b e c sejam atendidas se possível)" << endl;
        }
        i++;
    } while((check_a != 1 || check_b != 1 || check_c != 1) && (i <= 500));

    if (i <= 500)
        cout << "N = " << i << " (O menor valor de N para que a, b e c sejam atendidas se possível)" << endl;
    else
        cout << "Não foi possível calcular o N, por conta do limite adicionado ao código (o limite é 500 iterações) para não acontecer overflow no programa." << endl;

    return x + _sin_precision;
}

long double _sin(long double x) {
    return x - (pow(x, 3) / 6) + (pow(x, 5) / 120);
}

long double _cos(long double x) {
    return 1 - (pow(x, 2) / 2) + (pow(x, 4) / 24);
}

int main(int argc, char const *argv[]) {
    long double value, result;

    cout << "Digite um ângulo (em radianos): ";
    cin >> value;

    result = _sin_precision(value);

    cout << "<imple cosseno>: " << _cos(value) << endl;
    cout << "<cmath cosseno>: " << cos(value) << endl;
    cout << "<imple seno>: " << _sin(value) << endl;
    cout << "<cmath seno>: " << sin(value) << endl;
    cout << "<imple taylor seno>: " << result << endl;

    return 0;
}
