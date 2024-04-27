#include <iostream>
#include <conio.h>

using namespace std;

//(Generador de código). Leer una frase solicitada al usuario, realizar suma de todos sus dígitos, luego a esa 
//suma sacar el residuo de la división entre 11. El resultado agregarlo a la cadena. 
//Ejem: “YAZ83TA59ER77”
//Se suma: = 8+3+5+9+7+7 = 39 se aplica módulo de la división entre 11. 39 % 11 = 6. 
//SALIDA: “YAZ83TAHKER83-6”
//Validar datos de entrada: 
//a. Deber tener mínimo 10 y máximo 12 caracteres. 
//b. Debe tener mínimo 2 numeros y máximo 6. “YAZ8JTAGTERPP” Error o “Y8Z83TA59ER77” Error
//c. NO Debe tener guion. “YAZ83TA59ER77-6”. Error

int main(){
    char a[15],op='S';
	int i=0,r=0,cont=0,cont2=0,cont3=0;
	
    while(op=='S'){
    	system("cls");
    	cout<<"GENERADOR DE CODIGO\n";
    	cout<<"Digite una frase: ";cin>>a;

    	i=0;
		while(a[i] != '\0'){
    		cont+=1;
    		i++;
		}
	
		i=0;
    	while(a[i] != '\0'){
    			if (a[i] >= '0' && a[i] <= '9'){
    				cont2+=1;
    			}
    			i++;
    		}
    		
    	i=0;
    	while(a[i] != '\0'){
    		if (a[i] == '-'){
    			cont3+=1;
    		}
    		i++;
    		}	

		if(cont >=10 && cont<= 14){
    			if(cont2 >= 2 && cont2 <=6 ){
    				if(cont3 ==0){
    					for (i=0; i<cont; i++){	
            				if (a[i] >= '0' && a[i] <= '9'){
                				cout<<a[i]<<'+';
                				r += a[i]-'0';
    						}
        				}
        						
        				int tot=r%11;
        				cout<<"="<<r<<endl;
						cout<<a<<"-"<<tot<<endl;	
    				}else{
    					cout<<"Su frase tiene "<<cont3<<" guiones\n";
    					cout<<"No puede tener guion";
    				}										
    			}else{
    				cout<<"Debe tener entre 2 y 6 numeros\n";
    				cout<<"Su frase tiene "<<cont2<<" numeros\n";
    			}
    	}else{
    		cout<<"Debe tener entre 10 y 14 caracteres\n";
    		cout<<"Su frase tiene "<<cont<<" caracteres\n";
    	}

	    i=0,cont=0,cont2=0,cont3=0,r=0;
		do{
        	cout<<"\nDESEA CONTINUAR?  [S/N]: " ;
        	op = getche();
        	op = toupper(op);
        } while ((op != 'S') && (op != 'N'));
    }      
	system("cls");
    
	cout<<"-----HECHO POR CARLOS LEGRO-----";
    getch();

}
