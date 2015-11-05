#include<iostream>
#include "Vector.h"
#include "Circulo.h"


using namespace std;


int main() {
	
	Point p1(3.0 , 4.0);
	Point p2(5.0 , 6.0);
	circulo c(5.0,3.14);
	Vector vec1(p1 , p2);
	vec1.print();
	vec1.distancia();
	c.area();
	c.longitud();
}