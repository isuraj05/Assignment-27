#include<iostream>
#include<cstring>
using namespace std;

class myString
{
    private:
        char str[100];
    public:
        friend istream& operator>>(istream &, myString &);
        friend ostream& operator<<(ostream &, myString);
        
        void operator!()
        {
            int i;
            for(i=0;str[i];i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i]=str[i]-32;
                else if(str[i]>='A' && str[i]<='Z')
                    str[i]=str[i]+32;
            }
        }
};
istream& operator>>(istream &I, myString &M)
{
    cin.getline(M.str,100);
    return I;
}
ostream& operator<<(ostream &O, myString M)
{
    cout<<M.str<<endl;
    return O;
}
int main()
{
    myString m1;
    cout<<"Enter a string: ";
    cin>>m1;
    !m1;
    cout<<m1;
    return 0;
}
