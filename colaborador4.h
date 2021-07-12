#include<iostream>
using namespace std;
void transpuesta(float (*m1)[5], float (*r)[5]);

int main()
{
int i,j;
float matriz1[5][5];
cout<<"Obtener la transpuesta de una matriz \n";
cout<<"Ingrese los datos de la matriz1 \n";
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
cout<<"La transpuesta de la matriz1 es: \n";
for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<matriz1[j][i]<<" ";
		}
		cout<<"\n";	
	}


}
