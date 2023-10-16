#include <iostream>
#include <math.h>

int main() {
	double s1, s2, s3, heron, area;
	std::cout << "Please enter the sides of the triangle seperated with space:";
	std::cin >> s1 >> s2 >> s3;
	heron = (s1 + s2 + s3) / 2;
	area = sqrt(heron * (heron - s1) * (heron - s2) * (heron - s3));
	std::cout << "Price of the tile is: " << area * .80;



	return 0;
}
