#include<iostream>
using namespace std;

class Matrix
{
	private:
		int a[3][3];
	public:
		friend istream& operator>>(istream &, Matrix &M);
		
		friend ostream& operator<<(ostream &, Matrix M);
		
		Matrix operator-()
		{
			Matrix temp;
            int i,j;
			for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    temp.a[i][j]=-a[i][j];
                }
            }
			return temp;
		}
};
istream& operator>>(istream &I, Matrix &M)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>M.a[i][j];
        }
    }
	return I;
}
ostream& operator<<(ostream &O, Matrix M)
{
	int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<M.a[i][j]<<"  ";
        }
        cout<<endl;
    }
	return O;
}

int main()
{
	Matrix m1,m2;
    cout<<"Enter matrix element (3x3):"<<endl;
	cin>>m1;
    cout<<endl<<"Matrix is:"<<endl;
    cout<<m1;
    m2=-m1;
    cout<<endl<<"Negative matrix is:"<<endl;
    cout<<m2;
	return 0;
}
