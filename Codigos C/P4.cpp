#include <iostream>
#include <conio.h>

using namespace std;

//Leer limite inicial (X), Limite Final (Y) determinar todos los números amigos existentes, Usar todos los 
//While posibles y un solo For. Validar que Y sea mayor que X. 

int main(){
	int a,b;
	char op = 'S';
	
	while(op == 'S'){
		system("cls");
		cout<<"Digite limite inicial (X): "; cin>>a;
		cout<<"Digite limite final (Y): "; cin>>b;
	
		if(b > a){
			for(int i=a; i<=b; i++){
				int j=1;
				int cont=0;
				
			    while (j < i) {
                    if (i%j == 0) {
                        cont += j;
                    }
                    j++;
                }
                
                j = 1;
                int cont2 = 0;
                
                while (j < cont) {
                    if (cont % j == 0) {
                        cont2 += j;
                    }
                    j++;
                }
                
                if (i == cont2 && cont != cont2) {
                    cout << "Numeros amigos: " << i << " y " << cont << endl;
                }
				
			}
			
		}else{
			cout<<"X no puede ser mayor que Y";	
		}
		
		do{
			cout<<"\nDesea continuar? [S/N]";
			op = getch();
			op = toupper(op);
		}while((op != 'S') && (op != 'N'));		
	}
	
	system("cls");
	cout<<"-----HECHO POR CARLOS LEGRO-----";
	getch();
}
