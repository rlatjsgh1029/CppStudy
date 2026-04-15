#include<iostream>
/*
용어정리
함수:funcion
리턴값:return values
매개변수:parameters
인수:arguments
*/

using namespace std;

void print()
{
	cout << "Hello World" << endl;
}

int addTwoNumbers(int a, int b) // <-- 함수
{
	return a+b;

}

int main()
{

	int sum = addTwoNumbers(1, 2);

	return 0;

}

//수업 때매 주석처리

/*
//함수에 들어와서 사용되는 존재들을 매개변수라고 부른다.
int MultiplyTowNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;


	return sum;
}


int main()
{
	cout << MultiplyTowNumbers(1, 2) << endl;
	cout << MultiplyTowNumbers(3, 4) << endl;
	cout << MultiplyTowNumbers(8, 13) << endl;

	return 0;
}



//return을 해줄게 없을 경우에는 앞에 void를 붙힌다.  
void printHelloWorld()
{
	cout << "Hello World" << endl;

	return;

	cout << "Hello World2" << endl;
}

int main()
{
	printHelloWorld();

	return 0;
}*/