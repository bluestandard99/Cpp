#include <iostream>
using namespace std;  //std:standard ���°�.

//Ŭ���� ���� 
//Ŭ������ ������ �ִ� ��� �ʵ�(������), ��� �Լ��� ����
class Circle
	/*���� ���� ������
	public - ������ �� ����
	protected -
	private - �ڱ� �ڽ� �� ����*/

{//Ŭ���� ���� �κ�
private:	// Ŭ���� �ܺο����� �ٲ��� ���ϰ� const �Ѱ� 
	double radious;//��� �ʵ� ���� ---> -Radius�� uml ǥ����̴� �ǹ̴� ���� private ���� ���� ������.
	double getArea();
public:		//  Ŭ���� �ܺο��� �����Ϸ��� �������� �����
	double getRadius();
	double getPerimeter();
	void setRadius(double value);
};

// Ŭ���� �Լ� ����
double Circle::getRadius()		// Ŭ���� �Լ� ���� �Ҷ� Ŭ���� ������(::) �� ����ؾ��Ѵ�. Ŭ���� �����ڴ� ������ �ϴ� ����? �̶�� ��������.
{
	// statemet
}

double Circle::getArea()
{
	// statemet
}

double Circle::getPerimeter()
{
	// statemet
}

void Circle::setRadius(double value)
{
	// statemet
}

// application �κ� (main() �Լ� �κ� ����)
//Ŭ������ ��ü�� �����ؾ���

int main()	//��ü�� main�Լ����� �����.			
{
	Circle circle1;
	Circle circle2;
}