#include <complex>
#include <iostream>
#include <vector>



//auto i{ 0 };
static int i{ 0 };


void func() {
	i++;
}
int main() {

	func();
	func();
	std::cout << i;

	return 0;
}