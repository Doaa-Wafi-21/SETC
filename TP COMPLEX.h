#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(Complex& c);
	void afficher() const;
	~Complex();
	//declaration des operateur (surcharge des operaateur)
	Complex operator+(Complex c)const;
	Complex operator +(double)const;
	Complex operator -(Complex c)const;
	Complex operator -(double) const;
	Complex operator * (Complex c)const;
	Complex operator *(double)const;
	Complex operator /(Complex c) const;
	Complex operator /(double) const;
	bool operator==(const Complex& c) const;
	bool operator!=(const Complex& c) const;
	bool operator>(const Complex& c) const;
	bool operator<(const Complex& c) const;


	
	



};

