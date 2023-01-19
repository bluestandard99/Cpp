#include <iostream> 
using namespace std;

int main(void)
{
	int a, b, c;
	int max, min;
	max = 0, min = 100;
	double avr;
	avr = (max+min)/2;
	char grade;
	int i;

	cout << "첫번쨰 점수 입력";
	cin >> a;
	cout << "두번쨰 점수 입력";
	cin >> b;
	cout << "세번쨰 점수 입력";
	cin >> c;
	
	int A[] = { a, b, c };
	for ( i = 0; i < 3; i++)
	{
		if (A[i]>max)
		{
			max = A[i];
		}
		if (A[i]<min)
		{
			min = A[i];
		}
	}

	if (avr>=90)
	{
		grade = 'A';
	}
	if (avr>=80)
	{
		grade = 'B';
	}
	if (avr<=60)
	{
		grade = 'F';
	}

	cout << "성적출력해" << grade << endl;
}        