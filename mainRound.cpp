#include <iostream>
#include <fstream>
#include "filehelper.h"
#include "statnumbs.h"

int main() {
    std::cout << "\n\tWelcome to the Number Statistics Program!!!\n\n";

    std::ifstream file = openFile();
    std::cout << "\nCalculating...\n";

    processFile(file);

    std::cout << "\nThank you for using the Number Statistics Program!!\n";
    return 0;
}