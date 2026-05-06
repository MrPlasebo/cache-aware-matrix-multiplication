# Cache-Aware Optimization of Matrix Multiplication

This project compares two matrix multiplication implementations in C:

- a naive matrix multiplication version
- an optimized version that changes the loop order to improve memory access behavior

The main purpose of the project is to observe how implementation details and memory access patterns can affect execution time.

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
