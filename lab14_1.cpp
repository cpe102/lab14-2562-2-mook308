#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a =5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "\n&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	cout << "&c = " << &c << endl;
	cout << "&x = " << &x << endl;
	cout << "&y = " << &y << endl;
	cout << "&z = " << &z << endl;

	c = 'F'; //เปลี่ยนค่าของตัวแปร b ให้เป็นตัวอักษร F โดยการกำหนดผ่านตัวแปร c

	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	*y = 'W'; //เปลี่ยนค่าของตัวแปร b ให้เป็นตัวอักษร W โดยการกำหนดผ่าน Pointer y

	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	*x = 6; //เปลี่ยนค่าของตัวแปร a ให้เป็น 6 โดยการกำหนดผ่าน Pointer x

	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	**z = 7; //เปลี่ยนค่าของตัวแปร a ให้เป็น 7 โดยการกำหนดผ่าน Pointer z

	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	return 0;
}
