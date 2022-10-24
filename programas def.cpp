#include <iostream>

using namespace std;


int main(){
	
	string valor; 
	system("cls");
	while(true){
		cout<< "\n \n SELECCIONA UNA OPCION Y PULSE ENTER  \n \n";
		cout<< "1. suma \n ";
		cout<< "2. resta  \n ";
		cout<< "3. multiplicacion \n ";	
		cout<< "4. division \n ";	
		cout<< "5. palindromo \n ";	
		cout<< "6. numeros arabigo a romanos \n ";	
		cout<< "7. enteros a letras \n ";		
		cout<< "8. tablas de multiplicar \n ";	
		cout<< "9. tablas 1 al 10 \n ";	
		cout<< "a. decimal a hexadecimal \n ";	
		cout<< "s. decimal a binario \n ";	
		cout<< "d. calcular hipotenusa \n ";	
		cout<< "f. calcular numero par o impar \n ";	
			
		cin >> valor;
		if(valor=="1"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Suma.exe");
			break;
		}
		else if(valor=="2"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Resta.exe");
			break;
		}else if(valor=="3"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Multiplicacion.exe");
			break;
		}else if(valor=="4"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Dividir.exe");
			break;
		}else if(valor=="5"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Palindromo.exe");
			break;
		}else if(valor=="6"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\NumerosArabigosARomanos.exe");
			break;
		}else if(valor=="7"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\EnterosALetras.exe");
			break;
		}else if(valor=="8"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\TablasMultiplicar.exe");
			break;
		}else if(valor=="9"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\Tablas1Al10.exe");
			break;
		}else if(valor=="a"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\DecimalAHexadecimal.exe");
			break;
		}else if(valor=="s"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\DecimalABinario.exe");
			break;
		}else if(valor=="d"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\CalcularHipotenusa.exe");
			break;
		}else if(valor=="f"){
			system("C:\\Users\\pedro\\Desktop\\c++\\ProgramasBasicos\\CalcularNumeroParOImpar.exe");
			break;
		}
		
	}
	
}
