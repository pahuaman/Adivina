#include <iostream>
#include <cstdlib> //para rand() y srand()
#include <ctime> // para time()

using namespace std;


void menu_volverJugar(int intentos, int ingresa) {

    cout << "Intentos: " << intentos << endl;
    cout << "Tu ultimo intento fue: " << ingresa << endl;
    cout << "Lo siento se te acabaron los intentos y no has podido adivinar " << endl;
    cout << "Quieres volver a tratar? (S/Si)(N/No) " << endl;

}//menu-volverJugar

int volverJugar(char opcion, int intentos, int Adivina) {

    switch(opcion) {

        case 's': case 'S':

            cout << "Vuelve a jugar! " << endl;
            cout << endl;
            return intentos = 5;

        break;

        case 'n': case 'N':

            cout << "ADIOS! " << endl;
            cout << "El numero que se habia generado era: " << Adivina << endl;
            cout << endl;
            return intentos = 6;

        break;

        default:

            cout << "ADIOS! " << endl;
            cout << "El numero que se habia generado era: " << Adivina << endl;
            cout << endl;
            return intentos = 6;

    }//switch

}//volverJugar


int main() {

    srand(time(nullptr));
    int Adivina = 1 + (rand() % 100);
    int intentos = 5, ingresa;
    char opcion;


    do {

        system("Color 0B");
        cout << "Intentos: " << intentos << endl;
        cout << endl;
        cout << "Adivina el numero generado: " << endl;
        cin >> ingresa;


          if (ingresa < Adivina) {

              system("cls");
              cout << "Ingresaste: " << ingresa << endl;
              cout << "El numero ingresado es menor al numero generado" << endl;
              cout << endl;
              intentos--;

                if (intentos < 1) {

                    system("cls");
                    system("Color 0C");

                    menu_volverJugar(intentos, ingresa);
                    cin >> opcion;

                    system("cls");
                    intentos = volverJugar(opcion, intentos, Adivina);
                    system("Color 0B");

                }//if

          }//if
          else if (ingresa > Adivina) {

              system("cls");
              cout << "Ingresaste: " << ingresa << endl;
              cout << "El numero ingresado es mayor al numero generado" << endl;
              cout << endl;
              intentos--;

                if (intentos < 1) {

                    system("cls");
                    system("Color 0C");

                    menu_volverJugar(intentos, ingresa);
                    cin >> opcion;

                    system("cls");
                    intentos = volverJugar(opcion, intentos, Adivina);
                    system("Color 0B");

                }//if

          }//else-if
          else if (Adivina == ingresa) {

              system("cls");
              cout << "Si, el numero generado fue el: " << Adivina << endl;
              cout << "FELICIDADES GANASTE! " << endl;
              intentos = 6;

          }//else-if

    }while(intentos <= 5); //do-while



    return 0;
}//main
