//프로그램의 구조

#include<iostream> //입출력을 도와주는 기본 내장 기능

int main(void)
{
	int x = 2; // 2,3,5같은 것들을 literal(리터럴)이라고 부른다.
	x = 5;
	int y = x + 3;

	std::cout << 1+2+y*x << std::endl;

	return 0;
}