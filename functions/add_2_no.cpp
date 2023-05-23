#include<iostram>
using namespace std;

int add(int m, int n){
	int c = m + n;
	return c;
}

int main(){
  
  int a,b;
  cout << "enter first number"<<endl;
  cin >> a;
  cout << "enter second number" << endl;
  cin >> b;

  int sum = add(a,b);
  cout << "sum of two numbers is :" <<sum;

}