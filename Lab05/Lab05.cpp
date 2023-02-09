#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, x, y, z;
	
	//Asking for a,b,c,d//
	cout << "Let's calculate x, y, and z based on 4 integers" << endl;
	cout << " Enter first integer ";
	cin >> a;
	cout << " Enter second integer ";
	cin >> b;
	cout << " Enter third integer ";
	cin >> c;
	cout << " Enter fourth integer ";
	cin >> d;

	//Calculating x,y,z//
	x = pow(b, 2) - 4 * a * c;
	y = (pow(a, 2) + pow(c, 2)) / pow(d, 2);
	z = pow(d, 3) - 2 * pow(c, 2) + 3 * b - a;

	//Display x,y,z//
	cout << "x is " << x << ",  y is " << y << ",  z is " << z;

	return 0;
}