	#include <iostream>
	#include <conio.h>
    using namespace std;
    
//(validador de código). Leer una frase solicitada al usuario, realizar suma de todos sus dígitos excepto el 
//último número, luego a esa suma sacar el residuo de la división entre 11, el resultado debe ser igual al 
//último digito de la cadena digitada.
//Ejem: “CAS24#38HG1-7”
//Se suma: 2+4+3+8+1 = 18 se aplica módulo de la división entre 11. 18 % 11 = 7. El 7 es igual al ultimo 
//numero de la cadena digitada. Decir si es código es valido a no. 
//Validar datos de entrada: 
//a. Deber tener mínimo 10 y máximo 14 caracteres. Toda la cadena incluido el guion y el ultimo digito
//b. Debe tener mínimo 3 numeros y máximo 7. “CASUF-3AHGL-7” Error o “C86S24-38HG1-7” Error
//c. Debe tener solo un guion. “CAS24-38HG1-7”. Error

    int main(){
    	char a[20];
    	int i=0,j=0,cont=0,cont2=0,cont3=0,r=0;
    	char op='S';
    	
    	while(op=='S'){
    		system("cls");
    		cout<<"VALIDADOR DE CODIGO\n";
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
    			if(cont2 >= 3 && cont2 <=7 ){
    				if(cont3 <=1){
    					j = cont-1;
    					
    					for (i=0; i<j; i++){	
            				if (a[i] >= '0' && a[i] <= '9'){
                				cout<<a[i]<<'+';
                				r += a[i]-'0';
           					}
        				}
        						
        				int tot=r%11;
    	 				cout<<"="<<r<<endl;
    	 				cout<< "Aplicanco modulo es igual a "<<tot<<"\n\n";	
    				}else{
    					cout<<"Su frase tiene "<<cont3<<" guiones\n";
    					cout<<"Debe tener solo 1 guion";
    				}
    											
    			}else{
    			cout<<"Debe tener entre 3 y 7 numeros\n";
    			cout<<"Su frase tiene "<<cont2<<" numeros\n";
    			}
    				
    		}else{
    			cout<<"Debe tener entre 10 y 14 caracteres\n";
    			cout<<"Su frase tiene "<<cont<<" caracteres\n";
    		}
    		i=0,j=0,cont=0,cont2=0,cont3=0,r=0;
    	
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
