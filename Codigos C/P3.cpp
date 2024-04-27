#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

//(validador correo electrónico). Leer un correo solicitado al usuario, 
//Ejem: A@ICFES.COM.CO
//a. Debe tener mínimo 6 y máximo 30 caracteres. ejem: a@a.co es ok. Luego seguir validando
//b. Solo se permiten letras, números el punto y la “@” a@a$t.co error
//c. Debe tener una sola arroba “@” a@icfes@a.com.co error
//d. Deber tener máximo 2 puntos. No pueden estar juntos. a@icfes..com.co error
//e. Ni “@” ni el punto puede ser el primer carácter @icfes.com.co error 
//f. Ni “@” ni el punto puede ser el último carácter. icfes.com.co@ error
//g. El punto y la arroba en ningún momento están juntos, ni delante, ni atrás del arroba: icfes@.co.co

int main(){
	char a[40],op='S';
	
	while(op=='S'){
		system("cls");
		
		int i=0,cont=0,cont2=0,cont3=0;
		
		cout<<"VALIDADOR CORREO ELECTRONICO\n";
		cout<<"Digite su correo electronico: ";cin>>a;
		int lt = strlen(a);
		
		if(a[0] == '.' || a[0] == '@' || a[lt - 1] == '.' || a[lt - 1] == '@'){
			cout<<"el punto y el arroba no pueden estar al inicio";
		}else{
			while(a[i] != '\0'){
				cont++;
				if(a[i] == '@') cont2++;
				if(a[i] == '.') cont3++;
				i++;
			}
	
			if(cont > 5 && cont < 31){
				if((a[i] >= 'a' && a[i] < 'z') || (a[i] >= '0' && a[i] < '9') || (a[i] >= 'A' && a[i] < 'Z') || (a[i] >= '@') || (a[i] < '.')){
					if(cont3 <3){
							if(cont2<2){
								cout<<"valido";
							}else{
								cout<<"Se permite maximo 1 @";
							}
					}else{
						cout<<"Se permiten maximo 2 puntos";						}
				}else{
					cout<<"Caracteres invalidos";
				}	
			}else{
				cout<<"Solo se permiten entre 6 y 30 caracteres";
			}
		}
		
		do{
			cout<<"\nDesea continuar? [S/N]:";
			op = getche();
        	op = toupper(op);
		}while(op != 'S' && op != 'N');		
	}

	system("cls");
	cout<<"-----HECHO POR CARLOS LEGRO-----";
	getch();
	}
	
	

