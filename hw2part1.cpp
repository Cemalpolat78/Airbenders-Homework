#include <iostream>
#include <vector>
#include <cmath>

int main(){

	int prime {} ;
	std::cout << "Please enter a prime number: ";
	std::cin >> prime;
	std::vector<int> divisors {};
	std::vector<int> solutions {};
	for (int i = (prime - 1)  ; i != 0 ; i-- ){

		if ((prime - 1)% i == 0 ){divisors.push_back(i);}

	}


	for (int m = 2; m < prime; m++) {

		for (int x = divisors.size() - 1 ; x != -1 ; x-- ){
			
			if (static_cast<int>(std::pow(m, divisors[x])) % prime == 1 ){solutions.push_back(divisors[x]);break;} ;


		}

	}

	for (int y = 0 ; y < solutions.size() ; y++ ){
		
		std::cout << solutions[y] << " ";

	}
	
	return 0;
}