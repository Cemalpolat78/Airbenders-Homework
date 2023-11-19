#include <iostream>
#include <string>
#include <cmath>

class vector {

    private:
        double i;
        double j;
    
    public: 
        vector() : i(0), j(0) {}

        vector(double iValue , double jValue){
            i = iValue;
            j = jValue;    
        }
        vector operator+(vector const& obj){
            vector sum;
            sum.i = i + obj.i;
            sum.j = j + obj.j;
            return sum;
        }
        vector operator-(vector const& obj){
            vector sub;
            sub.i = i - obj.i;
            sub.j = j - obj.j;
            return sub;
        }
        vector operator*(double const& obj){
            vector prod;
            prod.i = i + obj;
            prod.j = j + obj;
            return prod;
        }
        vector operator/(double const& obj){
            vector div;
            div.i = i + obj;
            div.j = j + obj;
            return div;
        }
        double length(){
            double length;
            length = std::sqrt(std::pow(this->i, 2) + std::pow(this->j, 2));
        return length;
        };


        void display(){
            std::cout << "(" << this-> i << ", " << this-> j << ")" << std::endl;
        }

};


int main(){

    vector v1(3, 4);
    vector v2(5, 12);
    v1.display();
    v2.display();
    vector v3, v4, v5, v6;
    v3 = v1 + v2;
    v4 = v1 - v2;
    v3.display();
    v4.display();
    v5 = v1 * 2 ;
    v5.display();
    v6 = v2 / 2;
    v6.display();
    std::cout << v1.length() << std::endl;
    std::cout << v2.length() << std::endl;
    
    return 0;
}