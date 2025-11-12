#include "filehelper.h"
#include <iostream>

std::ifstream openFile() {
    std::string filename;
    std::ifstream file;

    std::cout << "Please enter the name of the data file: ";
    std::cin >> filename;

    file.open(filename);
    while (!file.is_open()) {
        std::cout << "I'm sorry, I could not open " << filename
                  << ". Please enter another name: ";
        std::cin >> filename;
        file.clear();
        file.open(filename);
    }

    std::cout << "\nFile " << filename << " opened successfully!\n";
    std::cout << "Reading data from " << filename << "...\n";
    return file;
}
