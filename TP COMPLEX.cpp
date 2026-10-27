#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;

}

Complex::Complex(Complex& c)
{
	this->re = c.re;
	this->img = c.img;
}

void Complex::afficher() const
{
	cout << re << "+" << img << endl;
	cout << re;

	if (img >= 0)
		cout << " + " << img << "i";
	else
		cout << " - " << -img << "i";
}


}




Complex Complex::operator+(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re=this->re +c.re;
	res->img = this->img + c.img;
	return *res;
}

Complex Complex::operator+(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img ;
	return *res;
}

Complex Complex::operator-(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complex Complex::operator-(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img ;
	return *res;
}

Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = c.re * this->re - c.img* this->img;
	res->img = c.re * this->img + c.img* this->re;
	
	return *res;
}
Complex Complex::operator*(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = a * this-> re;
	res->img = a * this-> img;
	return *res;
}
Complex Complex::operator/(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = (c.re * this->re + c.img * this->img )/ (pow(c.re, 2)+pow(c.img,2));
	res->img= (c.re*this->img-c.img+this->re)/ (pow(c.re, 2) + pow(c.img, 2));
	return *res;
}
Complex Complex::operator/(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	if(a==!0){
	res->re = re / a;
	res->img = img / a;
	}
	else {
		cout << "le nombre doit etre superier a 0" << endl;
	}
		

	
	return *res;
}
bool Complex::operator==(const Complex& c) const {
	return re == c.re &&
		img == c.img;
}

bool Complex::operator!=(const Complex& c) const {
	return !(*this == c);
}

bool Complex::operator>(const Complex& c) const {
	double module1 = re * re + img * img;
	double module2 = c.re * c.re +
		c.img * c.img;

	return module1 > module2;
}

bool Complex::operator<(const Complex& c) const {
	double module1 = re* re + img * img;
	double module2 = c.re * c.re +
		c.img * c.img;
	return module1 < module2;
}
Complex::~Complex()
{
}

	


