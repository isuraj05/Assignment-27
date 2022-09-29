#include<iostream>
#include<string.h>
using namespace std;

class CString
{
	private:
		char *s;
		int size;
	public:
		CString()
		{
			s=(char*)malloc(sizeof(char));
			size=1;
		}
		friend istream& operator>>(istream &, CString &);

		friend ostream& operator<<(ostream &, CString);

		CString operator+(CString C)
		{
			CString temp;
			strcpy(temp.s,s);
			strcat(temp.s,C.s);
			return temp;
		}
		int operator==(CString C)
		{
			return strcmp(s,C.s);
		}
};
istream& operator>>(istream &I, CString &C)
{
	cin.getline(C.s,100);
	return I;
}
ostream& operator<<(ostream &O, CString C)
{
	cout<<endl<<C.s<<endl;
	return O;
}

int main()
{
	CString c1,c2,c3;
	
	cout<<"Enter first string: ";
	cin>>c1;
	cout<<"Enter Second string: ";
	cin>>c2;
	c3=c1+c2;
	cout<<c1<<c2<<c3;
	
	if((c1==c2)==1)
		cout<<"Opposite of dictionary order";
	else if((c1==c2)==-1)
		cout<<"Dictionary order";
	else
		cout<<"Equal order";
	return 0;
}
