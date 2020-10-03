#include <iostream>

using namespace std;

class Rectangle{
	public:
	
		int add(int x, int y){
			return x+y;
		}
		int add(int x, int y=0){
			return x+y;
		}
		int printArea(int x, int y, int z){
			return x+y+z;
		}
};

int main()
{
	Rectangle rt;
	
	cout<<rt.add(1,2);
	cout<<rt.add(1);
	cout<<rt.add(1,2,3);
	
	
	return 0;
}
