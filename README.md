# Expense Tracker in C

A simple, multi-file command-line Expense Tracker written in C. This project separates data definitions, core logic, and the user interface using a structured folder layout.

## Project Structure
* `include/tracker.h` - Contains the `Expense` struct definition and function declarations.
* `src/tracker.c` - Contains the implementation of tracker functions (adding, viewing, summing).
* `src/main.c` - Contains the primary user menu loop dashboard.

## How to Compile and Run
Run the following command in your terminal:
```bash
gcc -include src/main.c src/tracker.c -o tracker
.\tracker
```
