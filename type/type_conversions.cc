#include <stdio.h>
#include <typeinfo>
int main()
{
	char c;
	short s;
	unsigned short us;//unsigned short int us;
	int i;
	unsigned int ui;
	long l;
	unsigned long ul;

	float f;
	double d;
	long double ld;
	printf("%lu\n", sizeof(c+s));
	printf("%s\n", typeid(c+s).name());
	printf("%s\n", typeid(c+us).name());
	printf("%s\n", typeid(s+us).name());
	printf("%s\n", typeid(us+i).name());
	printf("%s\n", typeid(i+ui).name());
	printf("%s\n", typeid(i+l).name());
	printf("%s\n", typeid(ui+l).name());
	printf("%s\n", typeid(l+ul).name());

	printf("%s\n", typeid(f+s).name());
	printf("%s\n", typeid(f+c).name());
	printf("%s\n", typeid(f+i).name());
	printf("%s\n", typeid(d+ui).name());
	printf("%s\n", typeid(d+l).name());
	printf("%s\n", typeid(ld+s).name());
	printf("%s\n", typeid(ld+i).name());

	return 0;
}
