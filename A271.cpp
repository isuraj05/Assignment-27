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
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
		Complex operator-(Complex c)
		{
			Complex temp;
			temp.real=real-c.real;
			temp.img=img-c.img;
			return temp;
		}
		Complex operator*(Complex c)
		{
			Complex temp;
			temp.real=real*c.real;
			temp.img=img*c.img;
			return temp;
		}
		bool operator==(Complex c)
		{
			if((real==c.real) && (img==c.img))
				return 1;
			else
				return 0;
		}
};

int main()
{
	Complex c1,c2,c3,c4,c5;
	c1.input();
	c2.input();
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
	c4=c1-c2;
	c4.display();
	c5=c1*c2;
	c5.display();
	
	if((c3+c4)==c5)
		cout<<"Equal";
	else
		cout<<"Not equal";
	return 0;
}
