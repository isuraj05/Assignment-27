#include<iostream>
using namespace std;

class Fraction
{
	private:
		long num,denom;
	public:
		Fraction()
		{
			num=0;
			denom=0;
		}
		friend istream& operator>>(istream &, Fraction &F);
		
		friend ostream& operator<<(ostream &, Fraction F);
		
		Fraction operator++()
		{
			Fraction temp;
			temp.num=++num;
			temp.denom=++denom;
			return temp;
		}
		Fraction operator++(int DummyArg)
		{
			Fraction temp;
			temp.num=num++;
			temp.denom=denom++;
			return temp;
		}
};
istream& operator>>(istream &I, Fraction &F)
{
	cout<<"Numerator: ";
	cin>>F.num;
	cout<<"Denominator: ";
	cin>>F.denom;
	return I;
}
ostream& operator<<(ostream &O, Fraction F)
{
	cout<<F.num<<"/"<<F.denom<<endl;
	return O;
}

int main()
{
	Fraction f1,f2,f3,f4;
	cout<<"f1: "<<f1;
	cout<<"f2: "<<f2<<endl;
	
	cout<<"Enter first fraction value: "<<endl;
	cin>>f1;
	f1++;
	cout<<endl<<"f1++: "<<f1;
	++f1;
	cout<<"++f1: "<<f1<<endl;
	
	cout<<"Enter second fraction value: "<<endl;
	cin>>f2;
	f2=++f1;
	cout<<endl<<"f2=++f1"<<endl;
	cout<<"f1: "<<f1;
	cout<<"f2: "<<f2;
	f2=f1++;
	cout<<endl<<"f2=f1++"<<endl;
	cout<<"f1: "<<f1;
	cout<<"f2: "<<f2;
	
	return 0;
}
