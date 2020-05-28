#include<bits/stdc++.h>
using namespace std;
class Add{
	int a,b;
	public:
		Add()// constuctor with no agrugemt pass
		{
			
		}
			Add sum(Add G)
	{
		Add temp;
		temp.a=a+G.a;
		temp.b=b+G.b;
		return temp;
	}

	Add(int i) // constructor with an agrument is pass
	{
		cout<<i<<" Real no:";
		cin>>a;
		cout<<i<<" imaginary no:";
		cin>>b;
	}
	void display()
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}

};

int main()
{  static Add c;
	int i,j,n,k;
	cout<<"number of Element you want to enter:";
	cin>>n;
	Add a[n];
	cout<<"Enter your complex numbers\n";
	for(i=0;i<n;i++)
	{
	
	   a[i]=(i+1);
	}
	cout<<"Your complex number are:\n";
		for(i=0;i<n;i++)
	{

		a[i].display();
	}

	cout<<"\nsum of complex are:";
	for(i=0;i<n;i++)
	{
	c=c.sum(a[i]);
    }
	c.display();
	return 0;
}
