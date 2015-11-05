#include "Point.h"

class Vector{
private:
	Point start, endq;

public:
	Vector(){
		
	}
    Vector(Point _start, Point _endq){
    	start = _start;
    	endq = _endq;
    }
    void distancia();
    void print();
};