#include<iostream>  //cin, cout, endl,....
#include<cstdio>    // printf
// \t 줄맞춤을 해준다.
// \n 줄바꿈을 해준다.
// \a 오디오 출력.
using namespace std;


//잠시 주석처리 해놨음

/*int main()
{
	int x = 1024;
	double pi = 3.141592;
	
	cout << "Hello World!\n"; //<< std::endl;
	cout << "x is" << x <<"pi is"<< pi << std::endl;

	cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "\a";

	return 0;
}*/

int main()
{
	int x = 1;
	
	cout << "Before your input, was" << x << endl;

	cin >> x;

	cout << " Your input is" << x << endl;

}