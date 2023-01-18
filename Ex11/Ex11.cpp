#include <iostream> 
using namespace std;
int main() {
	double x = 23.56;
	int y = 30;

	cout << "캐스팅 하지 않은 경우: " << x + y << endl;

	cout << "캐스팅 한 경우: " << static_cast<int>(x) + y;
	return 0;
}
