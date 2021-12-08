#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  bool run = true;
  // Contador de intentos restantes
  int intentos = 3;

  do {
    // Imprimir información básica
    cout << "Informática I - INDU-120" << endl;
    cout << "Proyecto Final" << endl;

    // Imprimir ejercicios
    cout << "Programas Disponibles:" << endl;
    cout << "A. Calculador de area de un triangulo." << endl;
    cout << "B. Calculador de primedio final." << endl;
    cout << "C. Contador de dígitos." << endl;
    cout << "D. Salir." << endl;

    // Leer ejercicio por ejecutar
    char opcion;

    cout << "Ingrese una opción: ";
    cin >> opcion;

    cout << endl;

    // Ejecutar programa con un switch
    switch (opcion) {
    case 'A':
      cout << "Calculador de area de un triangulo" << endl;
      // Capturar el largo de cada lado
      double a, b, c;
      cout << "- Ingrese un valor para el primer  cateto: ";
      cin >> a;

      cout << "- Ingrese un valor para el segundo  cateto: ";
      cin >> b;

      cout << "- Ingrese un valor pare el tercer cateto: ";
      cin >> c;

      // Revisar si todos los valores ingresados son positivos
      if (a <= 0 || b <= 0 || c <= 0) {
        cout << "¡Solo se aceptan valores positivos!";
      } else {
        // Verificar si se ha creado un triangulo
        if ((a + b) > c) {
          cout << "Calculando resultados....";
          cout << endl;
          // Calcular Area del triangulo con la formula de Heron
          // s = (a + b + c)/2.
          // Area = √[s(s-a)(s-b)(s-c)]

          double semi_perimetro = (a + b + c) / 2;
          cout << "~ El triangulo cuenta con un semi perimetro de: "
               << semi_perimetro << " cm" << endl;

          double area = sqrt(semi_perimetro * (semi_perimetro - a) *
                             (semi_perimetro - b) * (semi_perimetro - c));
          cout << "~ El area del triangulo es: " << area << " cm cuadrados"
               << endl;

          // Calcular tipo de triangulo
          if (a == b && a == b && b == c) {
            cout << "~ El traingulo es equilatero" << endl;
          } else if (a != b && a != c && b != c) {
            cout << "~ El triangulo es escaleno" << endl;
          } else {
            cout << "~ El triangulo es isoseles" << endl;
          }
          cout << endl;
        } else {
          cout << "¡Los valores ingresados no crean un triangulo!";
        }
      }
      break;
    case 'B':
      cout << "Programa B" << endl;
      break;
    case 'C':
      cout << "Programa C" << endl;
      break;
    default:
      cout << "Salida" << endl;
      break;
    }
  } while (run);
}
