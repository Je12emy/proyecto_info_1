#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  bool run = true;
  const int intentos_maximos = 3;
  // Contador de intentos restantes
  int intentos = intentos_maximos;

  do {
    // Imprimir información básica
    cout << "Informática I - INDU-120" << endl;
    cout << "Proyecto Final" << endl;
    cout << " - Valeria Rodríguez - 118330002" << endl;
    cout << " - Melany Gonzalez - 208410089" << endl;

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
    case 'A': {
      // Reiniciar la cantidad de intentos
      intentos = intentos_maximos;

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
    }
    case 'B': {

      // Reiniciar la cantidad de intentos posibles
      intentos = intentos_maximos;

      cout << "Calculador de primedio final." << endl;

      // Programa Calculador de promedio
      string estudiante;
      cout << "Ingrese un nombre: ";
      cin >> estudiante;

      float n1, n2, n3, n4, n5, n6, p1, p2, p3, p4, p5, p6, nota;

      // Obtener valores
      cout << "1. Ingrese un la primera nota de " + estudiante + ": ";
      cin >> n1;
      cout << " 1.1 Ingrese un porcentaje para la primera nota de " + estudiante + ": ";
      cin >> p1;

      cout << "2. Ingrese un valor para la segunda nota de " + estudiante + ": ";
      cin >> n2;
      cout << " 2.1 Ingrese un porcentaje para la segunda nota de " + estudiante + ": ";
      cin >> p2;

      cout << "3. Ingrese un valor la tercera nota de " + estudiante + ": ";
      cin >> n3;
      cout << " 3.1 Ingrese un porcentaje la tercera nota de " + estudiante + ": ";
      cin >> p3;

      cout << "4 Ingrese un valor la cuarta nota de " + estudiante + ": ";
      cin >> n4;
      cout << " 4.1 Ingrese un porcentaje la cuarta nota de " + estudiante + ": ";
      cin >> p4;

      cout << "5. Ingrese un valor la quinta nota de " + estudiante + ": ";
      cin >> n5;
      cout << " 5.1 Ingrese un porcentaje la quinta nota " + estudiante + ": ";
      cin >> p5;

      cout << "6. Ingrese un valor para la sexta nota " + estudiante + ": ";
      cin >> n6;
      cout << "6.1 Ingrese un porcentaje la sexta nota " + estudiante + ": ";
      cin >> p6;

      cout << "Validando datos..." << endl;

      if ((p1 + p2 + p3 + p4 + p5 + p5) > 100 || (p1 + p2 + p3 + p4 + p5 + p6) < 100 ) {
        cout << "Los porcentajes ingresados no deben de exceder ni ser menor a un 100% ..." << endl;
      } else {

        cout << "Calculando resultados....";

        // Fuente: https://es.wikihow.com/calcular-el-promedio-ponderado
        nota = (n1 * p1 / 100) + (n2 * p2 / 100) + (n3 * p3 / 100) +
               (n4 * p4 / 100) + (n5 * p5 / 100) + (n6 * p6 / 100);

        cout << endl;
        cout << "+ La calificación de " << estudiante << " es " << nota << endl;

        // Evaluar resultado
        if (nota >= 70) {
          cout << estudiante << " ha aprobado el curso de programación!" << endl;
        } else {
          cout << estudiante << " ha reprobado el curso de programación" << endl;
        }
      }
      break;
    }
    case 'C': {
      // Reiniciar la cantidad de intentos 
      intentos = intentos_maximos;

      // Programa Contador de Dígitos
      cout << "Contador de dígitos." << endl;
      string numero;

      // Capturar un número
      cout << "Ingrese un numero de máximo 4 dígitos:";
      cin >> numero;

      // Con la funcion length es posible obtner el largo de una cadena de text
      int largo = numero.length();
      if (largo <= 4) {
        // Variables acumuladoras
        int suma_final = 0;
        // Guarda el número actual en el ciclo
        string numero_actual;
        // Recorer por cada número
        // '123' -> recorre 3 veces
        for (int i = 0; i < largo; i++) {
          // Guardar el número actual en el ciclo
          // '1[2]3' -> numero_actual = 2
          numero_actual = numero[i];
          // Convertir de texto a numero
          // '2' -> 2
          // Puede causar un error si se ingresa una letra!
          // 'o' -> error
          suma_final = suma_final + stoi(numero_actual);
        }
        // Resultados finales
        cout << endl;
        cout << "- Suma de los números ingresados:" << suma_final<< endl;
        cout << "- Cantidad de números ingresados:" << largo << endl;
        cout << endl;

      } else {
        cout << "¡El numero ingreado no es valido!" << endl;
      }
      break;
    }

    case 'D': {
      intentos = intentos_maximos;
      char salir;
      cout << "¿Desea terminar el programa? [s/n]: ";
      cin >> salir;

      switch (salir) {
      case 's': {
        cout << "Terminando programa..." << endl;
        run = false;
        break;
      }
      case 'n': {
        // No hacer nada
        break;
      }
      default: {
        cout << "¡Esa no es una opción valida!" << endl;
      }
      }
      break;
    }

    default: {
      // Reducir la cantidad de intentos
      intentos = intentos - 1;
      cout << "Esa no es una opción valida... Tiene " << intentos <<  "intentos restantes..." << endl; 
      if (intentos == 0) {
        cout << "Se ha llegado al limite de intentos máximos, cerrando programa.." << endl;
        run = false;
      }
      break;
    }
    }
  } while (run);
}
