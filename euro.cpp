#include <iostream>
#include <windows.h>

using namespace std;

//Indicamos el valor actual de euro a peseta
const double PTS_EUR = 166.38;

int main(){

//Definimos las variables a convertir

   double euros, pts;

//Confeccionamos el programa

   cout << "Introduzca la cantidad de pesetas: ";
   cin >> pts;
   euros = pts/PTS_EUR;
   cout << pts << " pesetas equivalen a: " << euros << " euros" << endl;
}



