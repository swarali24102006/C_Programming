# Assignment 1 — C Programming Fundamentals

## Overview
This assignment builds a foundation in C programming through small, function-based programs. The focus is on writing functions, passing arguments, returning results, using loops, and making simple decisions.

## Programs Included

| File | Problem | Concepts Practised |
|---|---|---|
| `program1_1.c` | Divide two integers | Functions, parameters, return values, arithmetic, division-by-zero check |
| `program1_2.c` | Print `Marvellous` five times | `for` loop, function call |
| `program1_3.c` | Print numbers from 5 to 1 | `while` loop, decrementing a counter |
| `program1_4.c` | Check whether a number is divisible by 5 | Modulus operator (`%`), conditions, `BOOL`, `TRUE`, `FALSE` |
| `program1_5.c` | Print five asterisks (`*`) | Loops, repeated output, function arguments |

## How to Compile and Run

You need a C compiler such as GCC. Open a terminal in this folder and compile an individual program:

```bash
gcc program1_1.c -o program1_1
```

Run it:

- **Windows:** `.\program1_1.exe`
- **Linux/macOS:** `./program1_1`

Replace `program1_1.c` and `program1_1` with the file and executable name you want to run.

## Key Learning Outcomes
- Define and call user-defined functions.
- Pass values through function parameters and return results.
- Use `for` and `while` loops.
- Apply arithmetic and modulus operators.
- Use conditions to make decisions.
- Represent Boolean-style results with `typedef int BOOL` and `TRUE`/`FALSE`.

## Placement Preparation
These exercises help prepare for beginner-level C and technical screening questions on:
- Function declaration, definition, and function calls
- Parameters versus return values
- Loop tracing and iteration counts
- The `%` operator and divisibility
- `if-else` logic and edge cases such as division by zero

**Practice tip:** Before running each program, predict its output and trace the variable values manually. Also test boundary inputs, especially zero and negative numbers.

---
Part of the [C Programming Assignments](../../README.md) repository.
