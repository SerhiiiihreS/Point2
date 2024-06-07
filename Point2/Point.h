#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x; 
	int y;

	static int CrtPon;
public:

	void Input()
	{
		cin >> x >> y;
		++CrtPon;
	}
	void Show()
	{
		cout << x << "\t" << y << endl;
	}
	Point Sum(Point& b)
	{
		Point rez;
		rez.x = x + b.x; // a.x+b.x
		rez.y = y + b.y;// a.y + b.y
		return rez;
		
	}
	void Setx(int a);
	void Sety(int d);
	int Getx()const;
	int Gety()const;

	void Print()const;

	static void CrtPon1();

};


