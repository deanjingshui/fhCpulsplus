#include <iostream>

using namespace std;

int main()
{

	double a = (int)5.5 + 5.3;//结果是10.3

	double b = static_cast <int>(5.5) + 5.3;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	return 0;
}
