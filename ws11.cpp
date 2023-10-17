#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

class RecordManager {
private:
    std::ifstream file;

public:
    RecordManager(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open the file: " + filename);
        }
    }

    std::vector<int> readRecords() {
        std::vector<int> records;
        std::string line;
        int lineNumber = 1;
        while (std::getline(file, line)) {
            try {
                int record = std::stoi(line);
                records.push_back(record);
            } catch (const std::invalid_argument& e) {
                file.close();
                throw std::runtime_error("Wrong argument when reading the file at line " +
                                         std::to_string(lineNumber) + ": " + e.what());
            } catch (const std::out_of_range& e) {
                file.close();
                throw std::runtime_error("Out of range when reading the file at line " +
                                         std::to_string(lineNumber) + ": " + e.what());
            }
            lineNumber++;
        }
        file.close();
        return records;
    }
};

int main() {
    try {
        RecordManager manager("test_corrupt1.txt");
        std::vector<int> records = manager.readRecords();
        int sum = 0;
        for (int record : records) {
            sum += record;
        }
        std::cout << "Sum of records: " << sum << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
