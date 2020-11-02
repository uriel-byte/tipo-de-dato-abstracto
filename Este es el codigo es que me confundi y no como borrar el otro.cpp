#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
	using namespace std;
     int size;      
	struct estudiante
	{
		
		char nomb[50];
		char apel[50];
		char inge[50];
	    char seme[20];
		char Ncont[20];
		char domi[30];
	};
	
	int main(){
		int estudiante;
	
		
		cout << "Ingresa la cantidad de Estudiantes: " ;
        cin >> estudiante;
	
		struct estudiante estu[estudiante];
		
		for (int i=0; i<estudiante; i++){
			cout << "\n\tIngresa datos del estudiante: " << i+1<<endl;
		
        	while(getchar()!='\n');
        
        	cout << "\n\tNombre: ";
        	gets(estu[i].nomb);
        	
          		 size = strlen(estu[i].nomb);
           		 printf("size = %i\n",size);
            
        	cout << "\n\tApellido: ";
        	gets(estu[i].apel);
        	     size = strlen(estu[i].apel);
           		 printf("size = %i\n",size); 
           		 
        	cout << "\n\tIngenieria: ";
        	gets(estu[i].inge);
        	      size = strlen(estu[i].inge);
           		 printf("size = %i\n",size);
           		 
        	cout << "\n\tSemestre: ";
        	gets(estu[i].seme);
        	     size = strlen(estu[i].seme);
           		 printf("size = %i\n",size);
             
        	cout << "\n\tNumero de control: ";
        	gets(estu[i].Ncont);
        	     size = strlen(estu[i].Ncont);
           		 printf("size = %i\n",size);
        	    
        	    cout << "\n\tDomicilio: ";
        	gets(estu[i].domi);
        	     size = strlen(estu[i].domi);
           		 printf("size = %i\n",size);
        	    
              system("cls");
           		 
        	while(getchar()!='\n'); 
        
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

