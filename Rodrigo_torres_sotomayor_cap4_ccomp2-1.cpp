//Rodrigo_torres_sotomayor,ccomp2-1
//ejercicio 4.24
/*
#include <iostream>
using namespace std;
 int main(){
 	int x,y;
 	x = 15;
 	y = 5;
 	if (y<10){
 		if (x>10)
 			cout << "XxXxX"<< endl; 		
	 }
	else{
		cout <<"YxYxY"<<endl;
		cout<<"OoOoO"<<endl;
	}
 }
 */
 
 //ejercicio 26
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	int size,ancho_arriba,ancho_abajo,alto,siguientes_lineas;
 	cout<<"Ingresa el tamaño del cuadrado: ";
 	cin >> size;
 	ancho_arriba = 1;
 	ancho_abajo = 1;
 	alto = 1;
 	siguientes_lineas = 1;
 	if (1<=size && size<=20){
 		while(ancho_arriba<=size){
		 cout<<"*";
		 ancho_arriba++;
		}
		cout<<endl;
		while (alto!=0 && alto<=(size-2)){
			while (siguientes_lineas<=size){
				if (siguientes_lineas==1 || siguientes_lineas==size)
					cout<<"*";
				else
					cout<<" ";
				siguientes_lineas++;
			}
			cout<<endl;
			siguientes_lineas=1;
			alto++;
		}
		while(size>1 && ancho_abajo<=size){
			cout<<"*";
			ancho_abajo++;
		}
	 }
	else cout<<"El tamaño tiene que ir entre 1 y 20"<<endl;
 }
 */
 //ejericio 27
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	int copia,num_original, inverso,multiplicador,residuo;
 	cout<<"Ingrese un numero: ";
 	cin >> num_original;
 	inverso = 0;
 	copia = num_original;
 	residuo=0;
 	multiplicador = 10000;
 	while (copia!=0){
 		residuo = copia % 10;
 		inverso = inverso + (multiplicador*residuo);
 		copia = copia/10;
 		multiplicador = multiplicador / 10;
 	}
 	if (num_original == inverso)
 		cout<<num_original<<" Es palindromo"<<endl;
 	else
 		cout<<"No es palindromo"<<endl;
 }
 */
 
 //ejercicio 28
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	int num_binario, copia, numero_decimal, multiplicador, residuo;
 	cout << "Ingrese el numeor binario: ";
 	cin>>num_binario;
 	numero_decimal = 0;
 	copia = num_binario;
 	multiplicador = 1;
 	residuo =0;
 	for (;copia!=0;multiplicador = multiplicador*2){
 		residuo = copia % 10;
 		numero_decimal = numero_decimal + (multiplicador*residuo);
 		copia = copia/10;
	 }
	cout<<"El numero binario: "<<num_binario<<" en decimal es: "<<numero_decimal<<endl;
 }
 */
 /*
 //ejercicio 30
 #include <iostream>
 using namespace std;
 int main(){
 	int num1,num2,cantidad;
 	num1 = 0;
 	num2 = 1;
 	cout<<"Ingresa el numero Fibonacci: ";
 	cin>>cantidad;
 	while(cantidad!=0){
	 	if (cantidad==1){
	 		cout<<num1<<endl;
	 		break;
	 	}
	 	if(cantidad%2==1){
	 		cout<<num1<<", ";
	 		num1 = num1 + num2;
		 }
		if (cantidad%2==0){
			cout<<num2<<", ";
			num2= num2 + num1;
		}
		cantidad--;
}
 }
 */
 
 //ejercicio 32
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	int x,y,suma;
 	x=2;
 	y=4;
 	suma=(x + y); 
 	cout<< ++suma<<endl;//es válido ++(variable), no es valido ++(operacion)
 }
 */
 /*
 //ejercicio 33
 #include <iostream>
 using namespace
 std;
 int main(){
 	int lado1, lado2, lado3;
 	cout<<"Ingresa la medida del primer lado del triangulo: ";
 	cin >> lado1;
 	cout<<"Ingresa la medida del segundo lado del triangulo: ";
 	cin >> lado2;
 	cout<<"Ingresa la medida del tercer lado del triangulo: ";
 	cin >> lado3;
 	if (lado1>0 && lado2>0 && lado3>0)
 		cout<<"Si es un triangulo"<<endl;
 	else
 		cout<<"los lados de un triangulo tienen que ser mayores a 0"<<endl;
 }
 */
 
 //ejercicio35 //a
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	float factorial, resta, resultado;
 	cout<<"Ingresa el factorial: ";
 	cin>>factorial;
 	resta = 0;
 	resultado = 1;
 	while ((factorial-resta)>0){
 		resultado = resultado * (factorial-resta);
 		resta++;
 	}
 	cout<<"El factorial de "<<factorial<<" es: "<<resultado<<endl;
 }
 */
 //ejercicio 35 b
 /*
 #include <iostream>
 using namespace std;
 int main(){
 	float e,resta, res_factorial,resultado,factorial;
 	cout<<"INgresa el valor de e: ";
 	cin>>e;
 	res_factorial = 1;
 	resultado=1;
 	resta=0;
 	factorial= e-1;
 	while (e!=1){
 		while((factorial-resta)>0){
 			res_factorial = res_factorial *(factorial-resta);
 			resta++;
		 }
		 resultado = resultado + (1/res_factorial);
		 resta = 0;
		 factorial--;
		 e--;
		 res_factorial = 1;
	 }
	 cout<<"La respuesta es: "<<resultado<<endl;
 }
 */


