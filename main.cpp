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
    case 'A': {
      // Reiniciar la cantidad de intentos posibles
      intentos = 3;

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
      intentos = 3;

      cout << "Calculador de primedio final." << endl;

      // Programa Calculador de promedio
      string nombre;
      cout << "Ingrese un nombre: ";
      cin >> nombre;

      float nota1, nota2, nota3, nota4, nota5, nota6;
      float porcentaje1, porcentaje2, porcentaje3, porcentaje4, porcentaje5,
          porcentaje6;
      float resultado;

      // Obtener valores
      cout << "- Ingrese un valor para el primer instrumento: ";
      cin >> nota1;
      cout << "+ Ingrese un porcentaje para el primer instrumento: ";
      cin >> porcentaje1;

      cout << "- Ingrese un valor para el segundo instrumento: ";
      cin >> nota2;
      cout << "+ Ingrese un porcentaje para el segundo instrumento: ";
      cin >> porcentaje2;

      cout << "- Ingrese un valor para el tercer instrumento: ";
      cin >> nota3;
      cout << "+ Ingrese un porcentaje para el tercer instrumento: ";
      cin >> porcentaje3;

      cout << "- Ingrese un valor para el cuarto instrumento: ";
      cin >> nota4;
      cout << "+ Ingrese un porcentaje para el cuarto instrumento: ";
      cin >> porcentaje4;

      cout << "- Ingrese un valor para el quinto instrumento: ";
      cin >> nota4;
      cout << "+ Ingrese un porcentaje para el quinto instrumento: ";
      cin >> porcentaje4;

      cout << "- Ingrese un valor para el sexto instrumento: ";
      cin >> nota6;
      cout << "+ Ingrese un porcentaje para el sexto instrumento: ";
      cin >> porcentaje6;

      cout << "Calculando resultados....";

      // Calcular promedio ponderado
      // Fuente: https://es.wikihow.com/calcular-el-promedio-ponderado
      resultado = (nota1 * porcentaje1 / 100) + (nota2 * porcentaje2 / 100) +
                  (nota3 * porcentaje3 / 100) + (nota4 * porcentaje4 / 100) +
                  (nota5 * porcentaje5 / 100) + (nota6 * porcentaje6 / 100);

      cout << endl;
      cout << "Resultados: " << endl;
      cout << "~ La calificación de " << nombre << " es " << resultado << endl;

      // Evaluar resultado
      if (resultado >= 70) {
        cout << nombre << " ha aprobado el curso!" << endl;
      } else {
        cout << nombre << " ha reprobado el curso" << endl;
      }
      break;
    }
    case 'C': {
      // Reiniciar la cantidad de intentos posibles
      intentos = 3;

      // Programa Contador de Dígitos
      cout << "Contador de dígitos." << endl;
      string numero;

      // Capturar la entrada
      cout << "Ingrese un numero de máximo 4 dígitos: ";
      cin >> numero;

      int tamaño = numero.length();
      // Con la funcion length es posible obtner el tamaño de una cadena de text
      if (tamaño <= 4) {
        // Variables acumuladores
        int suma = 0;
        // Variable temporal para guardar el valor de un item dentro de la
        // cadena de texto
        string temp;
        // Iterar por cada item en la cadena de texto
        for (int i = 0; i < tamaño; i++){  
          // Guardar el valor actual
          temp = numero[i];
          suma = suma + stoi(temp);
        }
        // Mostrar resultados
        cout << endl;
        cout << "~ Suma de los dígitos: " << suma << endl;
        cout << "~ Cantidad de dígitos: " << tamaño << endl;
        cout << endl;

      } else {
        cout << "Ese numero no es valido..." << endl;
      }
      break;
    }

    case 'D': {
      intentos = 3;
      char salir;
      cout << "¿Desea salir del programa?[s/n]: ";
      cin >> salir;

      switch (salir) {
      case 's': {
        cout << "Cerrando programa...." << endl;
        run = false;
        break;
      }
      case 'n': {
        break;
      }
      default: {
        cout << "Esa no es una opción!" << endl;
      }
      }
      break;
    }

    default: {
      // Reducir la cantidad de intentos
      intentos = intentos - 1;
      cout << "Esa no es una opción valida... Intentos restantes " << intentos 
           << endl;
      if (intentos == 0) {
        cout << "Ha llegado al limite de intentos, cerrando programa.." << endl;
        run = false;
      }
      break;
    }
    }
  } while (run);
}
