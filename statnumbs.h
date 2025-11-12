#ifndef STATNUMBS_H
#define STATNUMBS_H

#include <fstream>
#include <iostream>
#include <cmath>

/**
 * Processes numeric data from a file stream to compute:
 * count, min, max, mean, variance, and standard deviation.
 * Uses Welford’s algorithm for numerical stability.
 */
void processFile(std::ifstream &file);

#endif
