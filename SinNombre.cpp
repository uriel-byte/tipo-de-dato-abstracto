#include <iostream>//Iniciamos implementado la libreria
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


	using namespace std;
     int size;      
	struct estudiante //Declaramos la estructura a usar
	{
		
		char nomb[50];//declaradas Variables que vamos a usar para ejecutar el programa 
		char apel[50];
		char inge[50];
	    char seme[20];
		char Ncont[20];
		char domi[30];
	};
	
	int main(){//La funcion principal del promgrama 
		int estudiante;//Declaración de variable 
	
		
		cout << "Ingresa la cantidad de Estudiantes: " ;//Debemos dar la cantidad de estudintes con lo que trabajaremos 
        cin >> estudiante;//Guarda la cantidar de estudiantes asignado 
	
		struct estudiante estu[estudiante];//Asignamos valor para llamar a la estructura
		
		for (int i=0; i<estudiante; i++){//Inicia el bucle for para repetir la cantidar de estudiantes asignado 
			cout << "\n\tIngresa datos del estudiante: " << i+1<<endl;
		
        	while(getchar()!='\n');
        
        	cout << "\n\tNombre: ";
        	gets(estu[i].nomb);//El valor se almacena en la variable nomb (nombre del estudiante) de la estructura estudiante
        	
          		 size = strlen(estu[i].nomb);
           		 printf("size = %i\n",size);
            
        	cout << "\n\tApellido: ";
        	gets(estu[i].apel);//El valor se almacena en la variable apil (apellido del estudiante) de la estructura estudiante
        	     size = strlen(estu[i].apel);
           		 printf("size = %i\n",size); 
           		 
        	cout << "\n\tIngenieria: ";
        	gets(estu[i].inge);//El valor se almacena en la variable inge (ingenieria del estudiante) de la estructura estudiante
        	      size = strlen(estu[i].inge);
           		 printf("size = %i\n",size);
           		 
        	cout << "\n\tSemestre: ";
        	gets(estu[i].seme);//El valor se almacena en la variable seme (semestre del estudiante) de la estructura estudiante 
        	     size = strlen(estu[i].seme);
           		 printf("size = %i\n",size);
             
        	cout << "\n\tNumero de control: ";
        	gets(estu[i].Ncont);//El valor se almacena en la variable Ncont (numero de control del estudiante) de la estructura estudiante
        	     size = strlen(estu[i].Ncont);
           		 printf("size = %i\n",size);
        	    
        	    cout << "\n\tDomicilio: ";
        	gets(estu[i].domi);//El valor se almacena en la variable Ncont (numero de control del estudiante) de la estructura estudiante
        	     size = strlen(estu[i].domi);
           		 printf("size = %i\n",size);
        	    
              system("cls");
           		 
        	while(getchar()!='\n'); //Bucle que vacía buffer de entrada para poner los dastos de los otros estudiantes 
        
       	}
       	
       	system("cls");
       	
      
       
       	cout << "\n\t\21\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\20\n";
		for (int i=0; i<estudiante; i++){
		
        	cout<<"\tNumero de Control:"<<estu[i].Ncont<<"\n";
			cout<<"\tNombre:"<<estu[i].nomb<<"\n";
			cout<<"\tApellido:"<<estu[i].apel<<"\n";
			cout<<"\tCarrera:"<<estu[i].inge<<"\n";
			cout<<"\tSemestre:"<<estu[i].seme<<"\n";
			cout<<"\tDomicilio:"<<estu[i].domi<<"\n";

		cout << "\n\t\21\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\20\n";	
    	}
    	cout << "\n\n";
		system("PAUSE");
		return 0;
	}

