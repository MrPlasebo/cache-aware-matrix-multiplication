# Cache-Aware Optimization of Matrix Multiplication

This project compares a naive matrix multiplication implementation with an optimized version in C.

The optimized version changes the loop order to improve memory access behavior and reduce execution time.

## Project Information

Course: Computer Architecture  
Project Phase: Final Presentation / Demo  
Student: Mirsad Özkan  
Student ID: 200029982  
Language: C  
Environment: Linux / WSL with GCC  

## Project Structure

```text
cache-aware-matrix-multiplication/
│
├── src/
│   ├── naive_matrix.c
│   └── optimized_matrix.c
│
├── Results.txt
├── final_report.pdf
├── README.md
├── Makefile
└── .gitignore
```

## Build and Run

Default matrix size is 500 x 500:

```bash
gcc src/naive_matrix.c -o naive
gcc src/optimized_matrix.c -o optimized
./naive
./optimized
```

For a custom matrix size, use `-DN`.

Example for 1000 x 1000:

```bash
gcc -DN=1000 src/naive_matrix.c -o naive
gcc -DN=1000 src/optimized_matrix.c -o optimized
./naive
./optimized
```

## Build and Run with Makefile

Default matrix size:

```bash
make clean
make
make run
```

Custom matrix size:

```bash
make clean
make N=1000
make run
```
## Test Environment

The benchmark tests were performed on a Windows computer with an AMD Ryzen 5 3500 processor.

## Results

Detailed benchmark results are available in `Results.txt`.

Summary:

| Matrix Size | Naive Average (s) | Optimized Average (s) | Improvement |
|---:|---:|---:|---:|
| 300 x 300 | 0.066901 | 0.064853 | 3.06% |
| 500 x 500 | 0.282797 | 0.278188 | 1.63% |
| 700 x 700 | 0.947626 | 0.847426 | 10.57% |
| 1000 x 1000 | 3.128471 | 2.404728 | 23.13% |

## Final Report

The final report is included as:

```text
final_report.pdf
```
