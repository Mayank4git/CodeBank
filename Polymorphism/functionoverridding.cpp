#include <iostream>

using namespace std;

class Animals
{
	public:
		void sound()
		{
			cout << "This is parent class" << endl;
		}
};

class Dogs : public Animals
{
	public:
		void sound()
		{
			cout << "Dogs bark" << endl;
		}
};

class Cats : public Animals
{
	public:
		void sound()
		{
			cout << "Cats meow" << endl;
		}
};

class Pigs : public Animals
{
	public:
		void sound()
		{
			cout << "Pigs snort" << endl;
		}
};

int main()
{
	Dogs d;
	Cats c;
	Pigs p;
	d.sound();
	c.sound();
	p.sound();

}
