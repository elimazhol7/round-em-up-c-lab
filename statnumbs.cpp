#include "statnumbs.h"

ifstream openFile(){
    string filename;
    ifstream file;

    cout << "Please enter the name of the data file: ";
    cin >> filename;

    file.open(filename);
    while (!file.is_open()) {
        cout << "I'm sorry, I could not open" << filename << ". Please enter another name: ";
        cin >> filename;
        file.clear();
        file.open(filename);
    }
    cout << "\nFile " << filename << "opened successfully!\n";
    cout << "reading data from" << filename << "...\n";
    return file;

}

// function to process the file and compute statistics

void processFile(ifstream &file) {
    double number;
    double mean = 0.0;
    double M2 = 0.0;
    double minVal, maxVal;
    int count = 0;

    if (file >> number) {

        count = 1;
        mean = number;
        M2 = 0.0;
        minVal = maxVal = number;
    } else {
        cout << "File is empty. No data to process. \n";
        return;

    }

    //process remaining numbers
    while (file >> number) {
        count++;
        if (number < minVal) minVal = number;
        if (number > maxVal) maxVal = number;

        double delta  = number - mean;
        mean += delta/count;
        M2 += delta * (number - mean);
    }
    double variance = (count > 1) ? M2 / (count - 1) : 0.0;
    double stdDev = sqrt(variance);

    cout << "\nDone processing data!\n\n";
    cout << "For your data, the statistics are as follows:\n\n";
    cout << "     Count:  " << count << endl;
    cout << "   Minimum:  " << minVal << endl;
    cout << "   Average:  " << mean << endl;
    cout << "   Maximum:  " << maxVal << endl;
    cout << "    StdDev:  " << stdDev << endl;
}
