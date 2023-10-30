#include <iostream>
#include <vector>

// add matrices
std::vector<std::vector<int>> add_matrices(const std::vector<std::vector<int>>& matrix_1, const std::vector<std::vector<int>>& matrix_2){
    int rows = matrix_1.size();
    int columns = matrix_1[0].size();
    std::vector<std::vector<int>> sum_matrix(rows, std::vector<int>(columns));
    for (int r = 0 ; r < matrix_1.size() ; r++ ){
            for (int c = 0 ; c < matrix_1[0].size() ; c++ ){
                sum_matrix[r][c] = matrix_1[r][c] + matrix_2[r][c];
            } 

    }

return sum_matrix;

}

//subtract matrices
std::vector<std::vector<int>> subtract_matrices(const std::vector<std::vector<int>>& matrix_1, const std::vector<std::vector<int>>& matrix_2){
    int rows = matrix_1.size();
    int columns = matrix_1[0].size();
    std::vector<std::vector<int>> subtract_matrix(rows, std::vector<int>(columns));
    for (int r = 0 ; r < matrix_1.size() ; r++ ){
        for (int c = 0 ; c < matrix_1[0].size() ; c++ ){
            subtract_matrix[r][c] = matrix_1[r][c] - matrix_2[r][c];
            
        }
    }

return subtract_matrix;

}

//prints matrices in a readable way
void print_matrix(const std::vector<std::vector<int>>& matrix){
    int rows = matrix.size();
    int columns = matrix[0].size();

    for (int r = 0 ; r < rows ; r++ ){
        std::cout << "(";
        for (int c = 0 ; c < columns - 1 ; c++ ){
            std::cout << matrix[r][c] << ", ";
        }
        std::cout << matrix[r][columns - 1] << ")" << std::endl;
    }
    std::cout << std::endl;
}


int main(){
    int rows, columns;
    std::cout << "Please enter the rows of the matrices: ";
    std::cin >> rows;
    std::cout << "Please enter the columns of the matrices: ";
    std::cin >> columns;

std::vector<std::vector<int>> matrix_1(rows, std::vector<int>(columns));
std::vector<std::vector<int>> matrix_2(rows, std::vector<int>(columns));

std::cout << "Values of Matrix 1: " << std::endl; 
    for (int r = 0 ; r < rows ; r++ ){
        for (int c = 0 ; c < columns ; c++){
            std::cout << "Enter value for (" << r+1 << "," << c+1 << "): ";
            std::cin >> matrix_1[r][c];

        }
    }
std::cout << "Values of Matrix 2: " << std::endl; 
    for (int r = 0 ; r < rows ; r++ ){
        for (int c = 0 ; c < columns ; c++){
            std::cout << "Enter value for (" << r+1 << "," << c+1 << "): ";
            std::cin >> matrix_2[r][c];

        }
    }

print_matrix(matrix_1);
print_matrix(matrix_2);

std::vector<std::vector<int>> matrix_sum = add_matrices(matrix_1, matrix_2);  
print_matrix(matrix_sum);

std::vector<std::vector<int>> matrix_sub = subtract_matrices(matrix_1, matrix_2);
print_matrix(matrix_sub);


return 0;
}





