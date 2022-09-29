#include<iostream>
using namespace std;

class Complex
{
	private:
		int real,img;
	public:
		void input()
		{
			cout<<"Enter two numbers: ";
			cin>>real>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex X,Complex Y)
{
	Complex temp;
	temp.real=X.real+Y.real;
	temp.img=X.img+Y.img;
	return temp;
}

int main()
{
	Complex c1,c2,c3;
	c1.input();
	c2.input();
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
	return 0;
}
