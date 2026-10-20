# Assignment 2 — Loops, Conditions, and Repeated Output

## Overview
This assignment develops logic-building skills using loops, conditional statements, user input, and functions with one or more parameters.

## Programs Included

| File | Problem | Concepts Practised |
|---|---|---|
| `program2_1.c` | Print asterisks based on the entered number | `while` loop, counter variable, user input |
| `program2_2.c` | Print asterisks based on the absolute value of a number | Negative-number handling, `while` loop |
| `program2_3.c` | Print `Hello` for a negative number; otherwise print `Demo` | `if-else`, relational operators |
| `program2_4.c` | Print a number a specified number of times | Functions with two parameters, `for` loop |
| `program2_5.c` | Check whether a number is even or odd | Modulus operator (`%`), Boolean-style return values |

## How to Compile and Run

You need a C compiler such as GCC. Open a terminal in this folder and compile one program:

```bash
gcc program2_1.c -o program2_1
```

Run it:

- **Windows:** `.\program2_1.exe`
- **Linux/macOS:** `./program2_1`

Change the source and executable names to run another program in this assignment.

## Key Learning Outcomes
- Use `while` and `for` loops to repeat operations.
- Read integer values with `scanf`.
- Pass one or multiple arguments to a function.
- Apply `if-else` to select behaviour.
- Use `% 2` to distinguish even and odd integers.
- Consider how negative values affect loop conditions.

## Placement Preparation
Use these programs to practise common entry-level screening topics:
- Predicting loop iterations and output
- Choosing between `for` and `while`
- Understanding conditions and comparison operators
- Passing multiple arguments to functions
- Even/odd checks using the modulus operator
- Testing zero, positive, and negative inputs

**Practice tip:** Trace the counter after every iteration. Test inputs such as `0`, `1`, `-1`, and a positive number to understand how each program behaves.

---
Part of the [C Programming Assignments](../../README.md) repository.
