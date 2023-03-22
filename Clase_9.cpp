#include <iostream>
using namespace std;

int main() {
  /*
  int edad, *p_edad;
  p_edad=&edad;
  cout<<"Ingrese la edad: ";
  cin>>edad;
  cout<<*p_edad<<endl;

  if (*p_edad>18)
  {
    cout<<"Mayor de edad"<<endl;
  } else{
    cout<<"Menor de edad"<<endl;
  }
  */
  /* int total=0;
   int notas[total];
   char res;
   int *p_notas=notas;

   do
   {
     cout<<"Ingrese notas: "<<endl;
     cin>>notas[total];    
     total++;
     cout<<"¿Desea ingresar otro valor? (s/n) "<<endl;
     cin>>res;

   } while (res=='s' || res=='S');

   cout<<" ---------- Mostrar Notas ---------- "<<endl;
   for (int i = 0; i < total; i++)
   {
     //cout<<"Nota ("<<i<<"): "<<notas[i]<<endl;
     cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
     p_notas++; //pase a la posicion de memoria siguiente
   }*/
  int total = 0, * p_notas;
  p_notas = new int[total];
  char res;
  /*	
  	do{
  		cout << "Ingrese nota: "<< total<< endl;
  		cin >>p_notas[total];
  		total++;
  		cout << "Desea ingresar otro valor? (s/n)"<< endl;
  		cin >> res;
  		
  	}while(res=='s'||res=='S');
  		
  	cout <<"-----mostrar notas-----"<< endl;
  	for(int i=0;i<total;i++){
  		cout << "NOTA ("<<i<<"):"<< *p_notas<< endl;
  		p_notas++;
  	}
  	delete []p_notas; 
  */

  int fil = 0, col = 0, ** pm_notas;
  cout << "Ingrese la cantidad de los estudiantes  " << endl;
  cin >> fil;
  cout << "Ingrese la cantidad de notas por estudiante " << endl;
  cin >> col;

  pm_notas = new int * [fil];
  for (int i = 0; i < fil; i++) {
    pm_notas[i] = new int[col];

  }
  for (int i = 0; i < fil; i++) {
    cout << " _________ Estudiante _________ " << i << endl;
    for (int ii = 0; ii < col; ii++) {
      cout << "Nota " << ii << ":";
      cin >> * ( * (pm_notas + i) + ii);
    }
    cout << "________________________" << endl;
  }
  cout << " ----------- MOSTRAR NOTAS ---------- " << endl;
  for (int i = 0; i < fil; i++) {
    for (int ii = 0; ii < col; ii++) {
      cout << * ( * (pm_notas + i) + ii);
    }
    cout << "________________________" << endl;
  }
  for (int i = 0; i < fil; i++) {
    delete[] pm_notas[i];
  }
  delete[] pm_notas;

  system("pause");
}