#include <iostream>
using namespace std;
//Implement the class Box  
class Box
{
private:
	int l, b, h;// are integers representing the dimensions of the box 

public:
	// Constructors: 
	Box()
	{
		l = 0;
		b = 0;
		h = 0;
	}
	Box(int x, int y, int z)
	{
		l = x;
		b = y;
		h = z;
	}
	Box(const Box& b) :l{ b.l }, b{ b.b }, h{ b.h } {
	};

	// The class should have the following functions : 
	int getLength() { return l; } // Return box's length
	int getBreadth() { return b; } // Return box's breadth
	int getHeight() { return h; }  //Return box's height
	long long CalculateVolume()
	{
		return (long long)b * h * l;
	} // Return the volume of the box
	//Overload operator << as specified
	friend ostream& operator<<(ostream& out, Box& B)
	{
		out << B.l << " " << B.b << " " << B.h;
		return out;
	}
	//Overload operator < as specified
	friend bool operator<(Box& A, Box& B)
	{
		if ((A.l < B.l) || (A.b < B.b && A.l == B.l) || (A.h < B.h && A.b == B.b && A.l == B.l))
		{
			return true;
		}
		else
			return false;
	};

};

int check2();