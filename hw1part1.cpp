#include <iostream>
#include <cmath>


int main() {
	int M, N;
	int quo_N, rem_N;
	std::cout << "Please enter the number of candies:";
	std::cin >> M;
	std::cout << "Please enter the capacity of non-standard boxes:";
	std::cin >> N;
	quo_N = M / N;
	rem_N = M % N;
	std::cout << "Amount of box M used is: " << quo_N << " and remaining candy is: " << rem_N << std::endl;
	std::cout << "Amount of 9 capacity box used is: " << M / 9 << " and remaining candy is: " << M % 9;

	return 0;
}