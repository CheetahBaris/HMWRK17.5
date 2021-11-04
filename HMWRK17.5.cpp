#include<cmath>
#include<iostream>
 
class Vector
{
private:
	double a;
	int x;
	int y;
	int z;
public:

	Vector() : x(10) , y(2) , z(4)
	{}
	void GetV()
	{
		std::cout << x<< ' ' << y << ' '  << z<<std::endl;
		
	}
	 void  Modul()
	 {
		a = sqrt( x*x + y*y + z*z);
		std::cout << a;
	 }
};

int main()
{
	Vector v;
	v.GetV();
	v.Modul();

}