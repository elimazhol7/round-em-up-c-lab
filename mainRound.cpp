// main.cpp
#include "statnumbs.h"

int main() {
    cout << "\n\tWelcome to the Number Statistics Program!!!\n\n";

    ifstream file = openFile();
    cout << "\nCalculating...\n";

    processFile(file);

    cout << "\nThank you for using the NSP!!\n";
    cout << "Endeavor to have a undulating day!\n";

    return 0;
}
