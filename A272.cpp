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
		Complex operator++()
		{
			Complex temp;
			temp.real=++real;
			temp.img=++img;
			return temp;
		}
		Complex operator++(int DummyArg)
		{
			Complex temp;
			temp.real=real++;
			temp.img=img++;
			return temp;
		}
		Complex operator--()
		{
			Complex temp;
			temp.real=--real;
			temp.img=--img;
			return temp;
		}
		Complex operator--(int DummyArg)
		{
			Complex temp;
			temp.real=real--;
			temp.img=img--;
			return temp;
		}
};

int main()
{
	Complex c1,c2,c3,c4,c5,c6;
	c1.input();
	c2.input();
	c1.display();
	c2.display();
	c3=++c1;
	c3.display();
	c4=c1++;
	c4.display();
	c1.display();
	c5=--c2;
	c5.display();
	c6=c2--;
	c6.display();
	c2.display();
	
	return 0;
}
