#include <iostream>
using namespace std;  //std:standard 쓰는거.

//클래스 정의 
//클래스가 가지고 있는 멤버 필드(데이터), 멤버 함수를 선언
class Circle
	/*접근 제어 지시자
	public - 누구나 다 접근
	protected -
	private - 자기 자신 만 접근*/

{//클래스 정의 부분
private:	// 클래스 외부에서는 바꾸지 못하게 const 한것 
	double radious;//멤버 필드 선언 ---> -Radius는 uml 표기법이다 의미는 같은 private 접근 제어 지시자.
	double getArea();
public:		//  클래스 외부에서 변경하려고 변수값을 만든것
	double getRadius();
	double getPerimeter();
	void setRadius(double value);
};

// 클래스 함수 정의
double Circle::getRadius()		// 클래스 함수 정의 할때 클래스 연산자(::) 를 사용해야한다. 클래스 연산자는 접근을 하는 수식? 이라고 생각하자.
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

// application 부분 (main() 함수 부분 선언)
//클래스의 객체를 선언해야함

int main()	//객체는 main함수에서 만든다.			
{
	Circle circle1;
	Circle circle2;
}