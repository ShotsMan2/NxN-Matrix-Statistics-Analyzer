# NxN Matrix Statistics Analyzer

This project implements a statistical analysis algorithm for 2D arrays (matrices) in C. It generates random datasets and computes key metrics.

## ⚙️ Algorithm Logic

1.  **Initialization:**
    * User defines the matrix dimension ($N$).
    * The matrix is populated with random integers in the range $[0, 100]$.
2.  **Analysis:**
    * **Minimum ($min$):** Tracks the smallest value found.
    * **Maximum ($max$):** Tracks the largest value found.
    * **Average ($ort$):** Calculates the integer mean: $\frac{\sum X_{ij}}{N \times N}$

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o matrix_stats
    ```
2.  Run the executable:
    ```bash
    ./matrix_stats
    ```
3.  Enter the size of the matrix (e.g., `5` for a 5x5 matrix).

## 📊 Output Example

```text
n i giriniz: 3
45  12  89 
33  0   100
5   67  23 

min: 0 
max: 100 
ort: 41
