#include<iostream>
using namespace std;

float areaCircle(float rad){
    
	float pi = 3.14;
	float area = pi * rad * rad;
    return area;
}

int main(){

	float r;
	cout << "enter radius"<<endl;
	cin >> r;
	cout<<"area of circle is "<<areaCircle(r);
}