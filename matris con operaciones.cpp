//====================================================
//PROGRAMA: OPERACIONES BASICAS
// AUTO : STALIN FRANCIS
// VESION: 1.02
//==================================================
#include<iostream>
#include<stdlib.h>
using namespace std;
#include "colaborador1.h"     // EN ESTE ARCHIVO VA LA FUNCION DE imprimir()
#include "colaborador2.h"     // EN ESTE ARCHIVO VA LA FUNCION DE sumar()
#include "colaborador3.h"     // EN ESTE ARCHIVO VA LA FUNCION DE restar()
#include "colaborador4.h"     // EN ESTE ARCHIVO VA LA FUNCION DE dividir()
#include "colaborador5.h"     // EN ESTE ARCHIVO VA LA FUNCION DE multipicar()

void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}



}

//FUCION PRINCIPAL
int main()
{
	int op,flag,i,j,k;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIO"<<endl<<endl;
	cout<<"1.- Ingresar los valores de las matrices \n";
	cout<<"2.- Obtener el producto de las dos matrices \n";
	cout<<"3.- Mostrar la potencias 2 de la primera matriz \n"; 
	cout<<"4.- Mostrar la transpuesta de la primera matriz \n";
	cout<<"5.- Calcular la media y varianza y compararlas \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
	// Valdez Mendoza Kevin
	cout<<"ESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES";
		cout<<"Ingrese los datos de la matriz1"<<endl;
	for(i=0;i<5;i++)
      {
        	for(j=0;j<5;j++)
       	 	{
            	cout<<"\nPosicion["<<i<<"]["<<j<<"]=  ";
            	cin>>matriz1[i][j];
        	}
      } 
      cout<<"\nLos datos de la matriz1 son:\n";
      for(i=0;i<5;i++)
      {
        	for(j=0;j<5;j++)
        	{
            	cout<<"\t"<<matriz1[i][j];
        	}
        cout<<endl;
      }
      //Matriz2
	cout<<"ingrese datos de la matriz2\n";
      	for(i=0;i<5;i++)
      {
        	for(j=0;j<5;j++)
        	{
            cout<<"\nPosicion["<<i<<"]["<<j<<"]=  ";
            cin>>matriz2[i][j];
        	}
      } 
       
      cout<<"\nLos datos de la matriz2 son:\n";
      for(i=0;i<5;i++)
      {
        	for(j=0;j<5;j++)
        	{
            	cout<<"\t"<<matriz2[i][j];
        	}
        cout<<endl;
      }
		break;
	        case 2:
//dayan kerly george charcopa  permite obtener la potencia 2 de una matriz 
			void potencia(float (*m1)[5], int p, float (*r)[5])
{
  cout<<"\nElementos de la matriz1 original : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[i][j]<<" ";
	}
cout<<"\n";
	}

cout<<"Calcular la potencia p de una ";
for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            r[i][j] = 0;
            
            for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            for(int z=0; z<5; ++z)
                r[i][j] += m1[i][z] * m1[z][j];



}
				

		
			
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
		potencia(matriz1,2,resultado);
		mostrar(resultado);
		break;
		case 4:
	// Vernaza Cañola Romario Joel
	cout<<"ESTA FUNCION PERMITE MOSTRAR LA TRANSPUESTA DE LA MATRIZ1. \n";
		cout<<"La Transpuesta de la matriz1 es:\n";
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					cout<<matriz1[j][i]<<" ";
				}
			cout<<"\n";	
			}
		break;
		case 5:
	//CUADO CALCULA Y MUESTRA LAS MADIA Y VARIANZA DE LAS DOS MATRICES
		mediayvarianza(matriz1,matriz2);
		break;
		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);

	return(0);

}
