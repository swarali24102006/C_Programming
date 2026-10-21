# Assignment 4 — Decision Making in C

## Overview
This assignment practises decision-making in C using `if`, `else if`, and `else` statements. Each program accepts input from the user, evaluates a condition, and displays the appropriate result through a user-defined function.

These exercises build the foundation for beginner-level coding rounds and technical interviews, where clear conditional logic and correct handling of boundary cases are important.

## Problems Covered

| Source File | Problem | Key Concepts |
|---|---|---|
| `program4_1.c` | Determine whether a number is positive, negative, or zero | Relational operators, `if-else if-else` |
| `program4_2.c` | Check whether a number is even or odd | Modulus operator (`%`), conditional statements |
| `program4_3.c` | Find the greater of two numbers, or identify equality | Comparison operators, multiple branches |
| `program4_4.c` | Check voting eligibility based on age | Relational operators, input validation, early `return` |
| `program4_5.c` | Check whether a number is divisible by 5 | Modulus operator (`%`), divisibility |

## Requirements
- A C compiler such as GCC (MinGW-w64 on Windows)
- A terminal or an IDE such as Visual Studio Code

Check whether GCC is available:

```bash
gcc --version
```

## Compile and Run

Open a terminal in this assignment folder and compile an individual program. For example:

```bash
gcc program4_1.c -o program4_1
```

Run the compiled program:

**Windows (PowerShell):**
```powershell
.\program4_1.exe
```

**Linux/macOS:**
```bash
./program4_1
```

Change the source and executable names to run another program. Each source file contains its own `main()` function, so compile and run the programs separately.

## Sample Test Cases

| Program | Input | Expected result |
|---|---|---|
| `program4_1.c` | `12` | Positive Number |
| `program4_1.c` | `-4` | Negative Number |
| `program4_1.c` | `0` | Zero |
| `program4_2.c` | `8` | Even Number |
| `program4_2.c` | `7` | Odd Number |
| `program4_3.c` | `10 6` | `10` |
| `program4_3.c` | `5 5` | Both Numbers Are Equal |
| `program4_4.c` | `18` | Eligible For Voting |
| `program4_4.c` | `16` | Not Eligible for Voting |
| `program4_4.c` | `-2` | Invalid Age |
| `program4_5.c` | `25` | Divisible by 5 |
| `program4_5.c` | `23` | Not Divisible by 5 |

## Concepts Practised
- Standard input and output using `scanf()` and `printf()`
- User-defined functions and arguments
- Decision-making with `if`, `else if`, and `else`
- Relational operators (`>`, `<`, `>=`)
- Modulus operator (`%`) for even/odd and divisibility checks
- Basic input validation and early function return
- Handling equality and boundary values

## Placement Preparation

These programs are useful for practising common entry-level interview and coding-screening questions:
- Classify a number as positive, negative, or zero.
- Determine whether an integer is even or odd.
- Find the maximum of two numbers and handle equal values.
- Apply eligibility rules using conditions.
- Check divisibility using the modulus operator.

For each problem, practise explaining:
1. What input is accepted and what output is expected.
2. Why the chosen condition works.
3. Which edge cases should be tested.
4. How the program behaves for boundary values.

### Suggested extra practice
- Find the greatest of three numbers.
- Check whether a year is a leap year.
- Check whether a character is a vowel or consonant.
- Check divisibility by both 3 and 5.
- Validate age input before checking eligibility.

## Code Quality Notes
- `scanf()` return values are not checked in these beginner exercises. A more robust version should validate that input was read successfully.
- Function name `ChechEvenOdd` in `program4_2.c` appears to be a spelling mistake; consider renaming it to `CheckEvenOdd` for consistency.
- The programs use `int` inputs, so test values should remain within the range supported by `int`.

---

Part of the C Programming Assignments collection.
