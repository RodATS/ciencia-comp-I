#include <iostream>
#include <string>

class Punto {
    public:
        Punto(double x, double y) : 
            coor_x(x), coor_y(y) {
        }
        double getC_x(){
        	return coor_x;
		}
		double getC_y(){
			return coor_y;
		}
   	private:
        double coor_x;
        double coor_y;
};
