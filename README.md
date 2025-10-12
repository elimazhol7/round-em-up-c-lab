# Basic Statistics Calculator

## Program Information
This program calculates **basic statistics** — average, standard deviation, maximum, and minimum — for a set of numbers stored in a user-specified file.  
The data file should contain a **space-separated list of numeric values**.

---

## Features
- Prompts the user to **enter the filename** containing numeric data.  
- Handles **file open errors** gracefully (e.g., missing or invalid files).  
- Processes data **element-by-element** without reading the entire file into memory.  
- Calculates:
  - **Average (mean)**
  - **Standard deviation**
  - **Maximum value**
  - **Minimum value**

---

## Statistical Background
The program uses the standard formulas for variance and standard deviation:

\[
\sigma^2 = \frac{\sum{(x_i - \bar{x})^2}}{N}
\]
\[
\sigma = \sqrt{\sigma^2}
\]

Where:
- \( x_i \) = each data point  
- \( \bar{x} \) = mean  
- \( N \) = number of data points  

---

## How It Works
1. The program prompts the user for the **name of the data file**.
2. It **opens the file** safely and checks for any errors.
3. The program **reads each number** from the file one by one.
4. It dynamically updates running totals for:
   - Count of numbers  
   - Sum of values  
   - Sum of squared values  
   - Maximum and minimum values  
5. After reading all numbers, it computes:
   - Mean = `sum / count`
   - Variance = `(sum_of_squares / count) - (mean ** 2)`
   - Standard deviation = `sqrt(variance)`

---

## Example Input File
**`data.txt`**

