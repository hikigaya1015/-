#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

class vector {
private:
	double x, y;
public:
	vector(double a, double b) {
		x = a, y = b;
	}
	vector add(vector other)
	{
		return vector(x + other.x, y + other.y);
	}
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	void dir()
	{
		double mo = sqrt(x * x + y * y);
		cout << fixed << setprecision(2)<< mo;
	}
};
int main()
{
	vector a(10.0, 10.0);
	vector b(15.0, 15.0);
	cout << "a=",a.print();
	cout << "b=",b.print();
	vector c = a.add(b);
	cout << "a+b=",c.print();
	cout << "mo_c=",c.dir();
	return 0;
}