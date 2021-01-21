#include <iostream>
#include "Punto.h"
#include <cmath>

using namespace std;

double distancia(Punto p1, Punto p2){
	double d = sqrt(pow(p2.getC_x()-p1.getC_x(),2)+pow(p2.getC_y()-p1.getC_y(),2));
	return d;
}

int main(){
	Punto p1(5,8);
	Punto p2(3,4);
	
	cout << "la distancia es: "<<distancia(p1,p2)<<endl;
	
	return 0;
}
