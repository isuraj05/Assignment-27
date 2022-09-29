#include<iostream>
using namespace std;

class Numbers
{
	private:
		int a,b,c;
	public:
		friend istream& operator>>(istream &, Numbers &);
		
		friend ostream& operator<<(ostream &, Numbers);

		Numbers operator-()
		{
			Numbers temp;
			temp.a=-a;
			temp.b=-b;
			temp.c=-c;
			return temp;
		}
};
istream& operator>>(istream &I, Numbers &N)
{
	cout<<"Enter three numbers: ";
	cin>>N.a>>N.b>>N.c;
	return I;
}
ostream& operator<<(ostream &O, Numbers N)
{
	cout<<"a="<<N.a<<", b="<<N.b<<", c="<<N.c<<endl;
	return O;
}

int main()
{
	Numbers n1,n2;
	cin>>n1;
	n2=-n1;
	cout<<n1<<n2;
	return 0;
}
