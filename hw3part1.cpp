#include <iostream>
#include <vector>
#include <string>

template <typename T> T second_largest(std::vector<T>& prices){

//raise error if input is empty
    if (prices.empty()){
        std::cerr << "There is no price given" << std::endl;;
        exit(1);
    }
  
    T largest = prices[0];
    T second_largest = -1;
//Find second largest price
    for ( const T& price : prices){ 
        
        if ( price > largest ){
            second_largest = largest;
            largest = price;
        }else if (price < largest && price > second_largest){
            second_largest = price;
 
        }
    
    }
//raise error in the template if all equal
    if (second_largest == -1){
        std::cerr << "All prices are equal" << std::endl;
        exit(1);
    }

return second_largest;

}



int main(){

    std::vector<int> integer_price = {3, 5, 7, 10};
    std::vector<float> float_price = {19.99, 33.5, 42.84, 77.12, 96.49};
    std::vector<int> all_same_error = {1, 1, 1, 1, 1, 1, 1};
    std::vector<int> empty_vector = {};

    int second_largest_int = second_largest(integer_price);
    float second_largest_float = second_largest(float_price);


    std::cout << second_largest_int << std::endl;
    std::cout << second_largest_float << std::endl;


// Uncomment below lines to test all being equal
//    int error_test = second_largest(all_same_error);
//    std::cout << error_test << std::endl;

// Uncomment below line to test empty vector
//    int empty_price = second_largest(empty_vector);
//    std::cout << empty_price << std::endl;


return 0;
}