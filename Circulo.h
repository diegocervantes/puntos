class circulo{
private:
	double r;
	double pi;
public:
	circulo(){

	}
	circulo(double _r, double _pi){
		r = _r;
		pi = _pi;
	}
	double getr(){ return r; }
	double getpi(){ return pi; }
	void longitud();
	void area();
};