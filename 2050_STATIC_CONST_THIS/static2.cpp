/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>

class Car
{
	int speed;
public:
	static int cnt;  // ����(declaration)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; // ���� (definition )


int main()
{
	Car c1, c2;

	std::cout << c1.cnt << std::endl;
}

