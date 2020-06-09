#include <iostream>

using namespace std;

class Rectangle
{
	public:
		void printArea(int x, int y)
		{
			cout << x * y << endl;
		}
		void printArea(int x)
		{
			cout << x * x << endl;
		}
		void printArea(int x, double y)
		{
			cout << x * y << endl;
		}
		void printArea(double x)
		{
			cout << x * x << endl;
		}
};

int main()
{
	Rectangle rt;
	rt.printArea(2,4);
	rt.printArea(2,5.1);
	rt.printArea(10);
	rt.printArea(2.3);
	return 0;
}