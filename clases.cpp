#include<iostream>

#include "Vector.h"
#include "Circulo.h"
#include "Point.h"
using namespace std;

void Vector::print(){
	cout<<"("<<start.getX<<","<<start.getY<<")->("<<endq.getX<<","<<endq.getY<<")"<<endl;
}


void Vector::distancia(){
	cout<<sqrt(pow((start.getX - endq.getX),2) + pow((start.getY - endq.getY),2))<<endl;
}

void circulo::area(){
	cout<<getpi*pow(getr,2)<<endl;	

}

void circulo::longitud(){
	cout<<2*getpi*r<<endl;
}