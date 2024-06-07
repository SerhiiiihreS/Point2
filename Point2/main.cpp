#include "Point.h"

int main()
{
	Point a;
	a.Input();
	a.Show();

	Point b;
	b.Input();
	b.Show();

	Point c = a.Sum(b);
	c.Show();
	 
	Point::CrtPon1();



	system("pause");
	return 0;
}