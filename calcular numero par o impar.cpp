#include <iostream>

#include <cstdlib>



using namespace std;

int numero; // Elimino el valor por defecto



int main(){

div_t resultado;

cout << "Ingrese un numero para verificar si es par" << endl;

cin >> numero; // Con cout capturamos el numero ingresado.

resultado=div(numero,2);

if (resultado.rem>0)

{

cout << numero << " es impar" << endl;

}

else {

    cout << numero << " es par" << endl;

}



cin.get();

cin.ignore();

return 0;

}