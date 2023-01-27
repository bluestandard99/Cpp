#include <iostream> 
using namespace std;
class Circle		//Ŭ���� ����
{
private:
	double radius;		//�ɹ� �ʵ�(ĸ��ȭ)
public:
	Circle(double radius);		//�Ű����� �ִ»�����
	Circle();		//�⺻ ������
	~Circle();		//�Ҹ���
	Circle(const Circle& circle);		//���� ������
	void setRadius(double radius);		//�ɹ� �޼ҵ�		������
	double getRadius() const;			//�ɹ� �޼ҵ�		������
	double getArea() const;				//�ɹ� �޼ҵ�
	double getPerimeter() const;		//�ɹ� �޼ҵ�
};
Circle::Circle(double rds)		//Ŭ����::������(�Ű�����)
	: radius(rds)		//������ �ɹ�(�Ű�����)
{
	cout << "�Ű������� �ִ� �����ڰ� ȣ��" << endl;
}
Circle::Circle()		//Ŭ����::������()
	: radius(0.0)		//������ �ɹ�()
{
	cout << "�⺻ �����ڰ� ȣ��" << endl;
}
Circle::Circle(const Circle& circle)
	: radius(circle.radius)
{
	cout << "���� �����ڰ� ȣ��." << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��ڰ� ȣ��" << radius;
	cout << endl;
}
void Circle::setRadius(double value) {
	radius = value;
}
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}
