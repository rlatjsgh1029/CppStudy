//변수 첫 시작

/*용어정리
객체 objects
(어떠한 정보,숫자,값,문자,문자열 의미 있는 정보들을 메모리에 저장하게 된다,
저장 된 것을 객체라고 부른다. 메모리에 위치를 갖고 있다.)
변수 variables
컴퓨터는 작업을 수행할 때 데이터를 메모리(RAM)에 저장해야 한다.
그것이 객체이고 이때 메모리의 특정 주소를 직접 외우는 것은 어렵기 때문에,
그 위치에 이름을 붙여서 사용하는데 이것이 바로 변수입니다.
Left-values과Right-values
초기화 initialization와 대입 assignment
초기화를 안 했을 때의 문제점*/

/*Debug*/



#include<iostream>

int main()
{

	//x라는 정수형 변수를 선언했다. (x도 객체이다. 그러므로 숫자를 담을 수 있는 공간을 메모리에 차지하고 있다.
	// = 같다라는 의미가 아닌 대입 연산자이다. 
	//assignment x에 대입 
	//변수는 항상 초기화를 시켜줘야한다.
	int x;

	// int x(123); // ->initialization

	//x = 5; // -> assignment
	

	/*int x;
		x=123;
	
	해석)
	x라는 변수 이름이 가르키고 있는 공간에 123이라는 정수를 저장해놓는다.*/

	std::cout << x << std::endl;


	return 0;
}

//회사에서 공부 끝.