#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs,mins,secs;
	public:
		friend istream& operator>>(istream &,Time &);
		
		friend ostream& operator<<(ostream &, Time);
	
		bool operator==(Time T)
		{
			if(hrs==T.hrs && mins==T.mins && secs==T.secs)
				return 1;
			else
				return 0;
		}

		void normalize()
		{
			mins+=secs/60;
			secs%=60;
			hrs+=mins/60;
			mins%=60;
		}
};
istream& operator>>(istream &I, Time &T)
{
	cout<<"Enter hour: ";
	cin>>T.hrs;
	cout<<"Enter mins: ";
	cin>>T.mins;
	cout<<"Enter secs: ";
	cin>>T.secs;
	return I;
}
ostream& operator<<(ostream &O, Time T)
{
	cout<<endl<<T.hrs<<":"<<T.mins<<":"<<T.secs<<endl<<endl;
	return O;
}

int main()
{
	Time t1,t2;
	cout<<"Enter First Time"<<endl;
	cout<<"-------------"<<endl;
	cin>>t1;
	t1.normalize();
	cout<<t1;

	cout<<"Enter Second Time"<<endl;
	cout<<"-------------"<<endl;
	cin>>t2;
	t2.normalize();
	cout<<t2;

	if(t1==t2)
		cout<<"Both times are same";
	else
		cout<<"Both times are different";
	return 0;
}
