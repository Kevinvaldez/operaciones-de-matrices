#include<iostream>
using namespace std;
void ingresar(float (*m1)[5], float (*m2)[5]);

int main()
{
int i,j;
float matriz1[5][5],matriz2[5][5];
cout<<"Ingresar y mostrar los valores de los arreglos o matrices \n";
	//Matriz 1
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



}

