#include<iostream>
using namespace std;
//operator overloading with m/m func.
//operator -
/*class num
{
	int a,b,c;
	public:
		void get()
		{
			cout<<"enter values  \n";
			cin>>a>>b>>c;
		}
		void show()
		{
			cout<<a<<b<<c; 
		}
	void num operator-();
		
};
num num::operator-()
{
	num n;
			n.a=-a;
			n.b=-b;
			n.c=-c;
			return n;
}
int main()
{
	num n1,n2;
	n1.get();
	n2= -n1;
	n1.show();
	n2.show();
	return 0;
}*/

//operator usning friend func.
/*class num
{
	int a,b,c;
	public:
		void get()
		{
			cout<<"enter values  \n";
			cin>>a>>b>>c;
		}
		void show()
		{
			cout<<a<<b<<c; 
		}
	friend num operator-(num);
		
};
 num operator-(num n1)
{
	num n;
			n.a=-n1.a;
			n.b=-n1.b;
			n.c=-n1.c;
			return n;
}
int main()
{
	num n1,n2;
	n1.get();
	n2= -n1;
	n1.show();
	cout<<"\n";
	n2.show();
	return 0;
}*/

//overloading of "++" using m/m func.
class num
{
	int a;
	public:
		void get()
		{
			cout<<"enter value a \n";
			cin>>a;
		}
		void show()
		{
			cout<<a;
		}
		num operator++();
};
num num::operator++()
{
	num n;
	n.a=a++;
	return n;
}
int main()
{
	num n1,n2;
	n1.get();
	++n1;
	n1.show();
	n2.get();
	++n2;
	n2.show();
	return 0;
}

/*class score
{
	int val;
	public:
		void get();
		 void show();
		 friend void operator++(score);
};
void score::get()
{
	cout<<"enter number \n";
	cin>>val;
}
void score::show()
{
	cout<<val;
}
*/
