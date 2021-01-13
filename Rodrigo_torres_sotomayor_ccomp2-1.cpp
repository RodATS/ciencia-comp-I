//Rodrigo torres sotomayor ccomp2-1
//ejercicio 16

#include <iostream>

using namespace std;
int main() {
	
	float num_primero, num_segundo;
	cout << "ingresa el primer numero: ";
	cin >>num_primero;	
	cout << "ingresa el segundo numero: ";
	cin >> num_segundo;

	cout << "suma: " << num_primero + num_segundo << endl;
	cout << "resta: " << num_primero - num_segundo << endl;
	cout << "multiplicacion: " << num_primero * num_segundo << endl;
	cout << "division: " << num_primero / num_segundo << endl;
}


//ejercicio 18
/*
#include <iostream>
using namespace std;
int main(){
	int primer_numero, segundo_numero;
	cout << "ingresa el primer numero: ";
	cin >>primer_numero;	
	cout << "ingresa el segundo numero: ";
	cin >> segundo_numero;
	
	if (primer_numero==segundo_numero)
		cout << "These numbers are equal or Estos numeros son iguales" << endl;
		
	else
	{ 	if (primer_numero > segundo_numero)
			cout << primer_numero << " is lager" << endl;
		else
			cout << segundo_numero << " is larger" << endl;
	 } 
}
*/

// ejercicio 20
/*
#include <iostream>
using namespace std;
int main(){
	float radio, diametro, pi, area, circunferencia;
	pi = 3.14159;
	cout << "Ingresa el radio del circulo: ";
	cin >> radio;
	diametro = radio * 2;
	circunferencia = 2 * pi * radio;
	area = pi * (radio*radio);
	cout << "El diametro del circulo es: " << diametro << endl;
	cout << "El area del circulo es: " << area << endl;
	cout << "El circunferencia del circulo es: " << circunferencia << endl;
}
*/

//ejercicio 22
/*
#include <iostream>
using namespace std;
int main(){
	cout << "*****\n****\n***\n**\n*\n " << endl;
} 
*/

//ejercicio 24
/*
#include <iostream>
using namespace std;
int main(){
	int primer_numero, segundo_numero;
	cout << "ingresa el primer numero: ";
	cin >>primer_numero;	
	cout << "ingresa el segundo numero: ";
	cin >> segundo_numero;
	if (primer_numero % 2 == 1)
		cout<< primer_numero <<" es impar"<<endl;
	
	if (segundo_numero % 2 == 1)
		cout<< segundo_numero <<" es impar"<<endl;
		
	if ((primer_numero + segundo_numero)%2 == 1)
		cout << "La suma es: " << primer_numero + segundo_numero << endl;
	
}
*/

//ejercicio 26
/*
#include <iostream>
using namespace std;
int main(){
	cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *" << endl;
}
*/

//ejercicio 28
/*
#include <iostream>
using namespace std;
int main(){
	int number;
	cout << "Ingresa el numero: ";
	cin >> number;
	cout << number%10<< "  ";
	number = number/10;

	cout << number%10<< "  ";
	number = number/10;

	cout << number%10<< "  ";
	number = number/10;

	cout << number%10 << endl;
}
*/

//ejercicio 30
/*
#include <iostream>
using namespace std;
int main(){
	float weight, height, BMI;
	cout << "Ingrese su peso(kg): ";
	cin >> weight;
	cout << "Ingrese su altura(m): ";
	cin >> height;
	BMI = weight/(height*height);
	cout << "\nTu indice de masa muscular es: "<< BMI << endl;
	if (BMI<18.5)
		cout << "Estas bajo de peso"<<endl;

	if (18.5<=BMI && BMI <= 24.9)
		cout<< "Estas normal"<<endl;

	if (25<=BMI && BMI<=29.9)
		cout << "Estas con sobrepeso"<<endl;
		
	if (30<=BMI)
		cout << "Estas obeso"<<endl;
	
	cout << "\nBMI Valores:\nBajo de peso: menos 18.5\nNormal: entre 18.5 y 24.9\nSobrepeso: entre 25 y 29.9\nObeso: mas de 30"<<endl;
	
}
*/

//ejercicio 32
/*
#include <iostream>
using namespace std;
int main(){
	int age;
	float MHR;
	cout << "Ingrese su edad: ";
	cin >> age;
	MHR = 220 - age;
	cout << "Su limite de ritmo cardiaco es: " << MHR << endl;
	MHR = 208 - (0.7 * age);
	cout << "Su limite de ritmo cardiaco segun Tanaka(2001) es: " << MHR << endl;
	MHR = 207 - (0.7 * age);
	cout << "Su limite de ritmo cardiaco segun Gellish(2007) es: " << MHR << endl;
	MHR = 211 - (0.64 * age);
	cout << "Su limite de ritmo cardiaco segun Nes(2012) es: " << MHR << endl;
}
*/
