#include <iostream>

using namespace std;

int main() {
  int edad = 25, * p_edad; //*puntero no puede tener un valor asignado
  p_edad = & edad;  //&variable es el contenido de la direccion

  cout << "variable Edad: " << edad << endl;
  cout << "Puntero edad: " << * p_edad << endl; //Contenido
  cout << "Direccion edad: " << & p_edad << endl; // Direccion de memoria

  cout << " ---------- cambiar valores ---------- " << endl;
  * p_edad = 40;

  cout << "variable Edad: " << edad << endl;
  cout << "Puntero edad: " << * p_edad << endl;
  cout << "Direccion edad: " << & p_edad << endl; 

  cout << " ---------- otra variable a p_edad valores ---------- " << endl;
  int edad2 = 100;
  p_edad = & edad2;
  edad = 400;

  cout << "variable Edad: " << edad << endl;
  cout << "Puntero edad: " << * p_edad << endl;
  cout << "Direccion edad: " << & p_edad << endl;
  cout<<'\n';
  cout << "Variable edad 2: " << edad2 << endl;
  cout << "Direccion edad 2: " << & edad2 << endl; 

  system("pause");
}