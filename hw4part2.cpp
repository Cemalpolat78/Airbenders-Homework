#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

struct RegionData {
    double totalYearlyIncome = 0.0;
    int totalPopulation = 0;
};

int main() {
    std::ifstream data_file("data.txt");

    if (!data_file.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    std::map<std::string, RegionData> region_data;

    std::string line;
    while (std::getline(data_file, line)) {
        std::istringstream parsed_line(line);
        std::vector<std::string> city_vector;
        std::string datum;

        while (std::getline(parsed_line, datum, ',')) {
            city_vector.push_back(datum);
        }

        if (city_vector.size() == 4) {
            std::string region = city_vector[1];
            double yearly_income = std::stod(city_vector[2]);
            int population = std::stoi(city_vector[3]);

            region_data[region].totalYearlyIncome += yearly_income;
            region_data[region].totalPopulation += population;
        }
    }

    std::ofstream output_file("output.txt");

    if (!output_file.is_open()) {
        std::cerr << "Failed to open the output file." << std::endl;
        return 1;
    }

    for (const auto& entry : region_data) {
        output_file << entry.first << "," << entry.second.totalYearlyIncome << "," << entry.second.totalPopulation << std::endl;
    }

    output_file.close();

    return 0;
}