#include "statnumbs.h"

void processFile(std::ifstream &file) {
    double number;
    double mean = 0.0;
    double M2 = 0.0; // Sum of squared deviations
    double minVal, maxVal;
    int count = 0;

    if (file >> number) {
        count = 1;
        mean = number;
        M2 = 0.0;
        minVal = maxVal = number;
    } else {
        std::cout << "File is empty. No data to process.\n";
        return;
    }

    while (file >> number) {
        count++;

        if (number < minVal) {
            minVal = number;
        } 
        if (number > maxVal) {
            maxVal = number;
        }

        double delta = number - mean;
        mean += delta / count;
        M2 += delta * (number - mean);
    }

    double variance = (count > 1) ? M2 / (count - 1) : 0.0;
    double stdDev = std::sqrt(variance);

    std::cout << "\nDone processing data!\n\n";
    std::cout << "For your data, the statistics are as follows:\n\n";
    std::cout << "     Count:  " << count << "\n";
    std::cout << "   Minimum:  " << minVal << "\n";
    std::cout << "   Average:  " << mean << "\n";
    std::cout << "   Maximum:  " << maxVal << "\n";
    std::cout << "    StdDev:  " << stdDev << "\n";
}

