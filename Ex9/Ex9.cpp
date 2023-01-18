#include <iostream> 
#include <typeinfo> 
using namespace std;
int main() {
	int x = 123;
	long y = 140;
	double z = 114.56;

	cout << "x + y 자료형: " << typeid(x + y).name() << endl;
	cout << "x + y 값: " << x + y << endl << endl;

	cout << "x + y + z 자료형: " << typeid(x + y + z).name() << endl;  cout << "x + y + z 값: " << x + y + z << endl;
	return 0;
}
