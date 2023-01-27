#include <iostream> 
using namespace std;
class Circle		//클래스 정의
{
private:
	double radius;		//맴버 필드(캡슐화)
public:
	Circle(double radius);		//매개변수 있는생성자
	Circle();		//기본 생성자
	~Circle();		//소멸자
	Circle(const Circle& circle);		//복사 생성자
	void setRadius(double radius);		//맴버 메소드		설정자
	double getRadius() const;			//맴버 메소드		접근자
	double getArea() const;				//맴버 메소드
	double getPerimeter() const;		//맴버 메소드
};
Circle::Circle(double rds)		//클래스::생성자(매개변수)
	: radius(rds)		//데이터 맴버(매개변수)
{
	cout << "매개변수가 있는 생성자가 호출" << endl;
}
Circle::Circle()		//클래스::생성자()
	: radius(0.0)		//데이터 맴버()
{
	cout << "기본 생성자가 호출" << endl;
}
Circle::Circle(const Circle& circle)
	: radius(circle.radius)
{
	cout << "복사 생성자가 호출." << endl;
}
Circle::~Circle() {
	cout << "소멸자가 호출" << radius;
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
