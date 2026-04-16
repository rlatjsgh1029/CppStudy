#include<iostream>

using namespace std;

int main()
{
	// x가 메모리가 잡히고  그 메모리 위치에 0이라는 값으로 초기화가 된다.
	// x가 인스터스를 갖게 되고 메모리에 실제 자기의 존재를 갖게 된다.
	// 그렇게 이어지다가 중괄호 밖으로 나가면 x가 사라진다.
	int x(0); 
	
	cout << x << "" << &x << endl;


	//	중 괄호를 열어서 영역을 나눴기 때문에,
	//	바깥 중 괄호랑은 다르다. 다른 메모리에 대한 식별자로 된다.	 
	{
		
		//int x = 1;
		x = 1;
		cout << x << " " << &x	<< endl;
	}

	{
		int x = 2;

		cout << x << "" << &x << endl;

		return 0;
	}

	cout << x << "" << &x << endl;

	return 0;
}