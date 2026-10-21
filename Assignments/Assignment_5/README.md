# Assignment 5 — Conditional Logic and Validation in C

## Overview
This assignment builds decision-making skills in C through practical problems involving comparisons, calendar rules, grading, divisibility, and character classification. Each program accepts input, processes it through a user-defined function, and displays a result.

These are useful foundations for placement preparation because they practise translating requirements into clear conditions and checking boundary cases.

## Problems Covered

| Source File | Problem | Key Concepts |
|---|---|---|
| `program5_1.c` | Find the greatest of three integers | Relational operators, `if-else if-else`, logical AND (`&&`) |
| `program5_2.c` | Determine whether a year is a leap year | Modulus (`%`), compound conditions, leap-year rules |
| `program5_3.c` | Assign a grade based on marks out of 100 | `float`, ranges, chained conditions, input validation |
| `program5_4.c` | Check divisibility by 3, 5, both, or neither | Modulus (`%`), condition ordering, logical AND |
| `program5_5.c` | Classify a character as uppercase, lowercase, digit, or special character | `char`, character ranges, conditional statements |

## Requirements
- A C compiler such as GCC (MinGW-w64 on Windows)
- A terminal or IDE such as Visual Studio Code

Check whether GCC is installed:

```bash
gcc --version
```

## Compile and Run

Open a terminal in this assignment folder. Compile each program separately because every source file has its own `main()` function.

Example:

```bash
gcc program5_1.c -o program5_1
```

Run on **Windows PowerShell**:

```powershell
.\program5_1.exe
```

Run on **Linux/macOS**:

```bash
./program5_1
```

Replace the filename in the commands to compile and run a different program.

## Sample Test Cases

| Program | Input | Expected result |
|---|---|---|
| `program5_1.c` | `10 25 17` | `25 is Greatest` |
| `program5_1.c` | `9 9 3` | The current implementation prints `3 is Greatest`; see Code Quality Notes |
| `program5_2.c` | `2000` | Leap Year |
| `program5_2.c` | `1900` | Not a Leap Year |
| `program5_2.c` | `2024` | Leap Year |
| `program5_3.c` | `95` | Grade A |
| `program5_3.c` | `80` | Grade B |
| `program5_3.c` | `67` | Grade C |
| `program5_3.c` | `45` | Grade D |
| `program5_3.c` | `32` | Fail |
| `program5_3.c` | `105` | Invalid Marks |
| `program5_4.c` | `15` | Divisible by Both |
| `program5_4.c` | `10` | Divisible by 5 Only |
| `program5_4.c` | `9` | Divisible by 3 Only |
| `program5_4.c` | `7` | Not Divisible by Either |
| `program5_5.c` | `G` | Uppercase Alphabet |
| `program5_5.c` | `m` | Lowercase Alphabet |
| `program5_5.c` | `8` | Digit |
| `program5_5.c` | `#` | Special Character |

## Key Concepts Practised
- Functions with parameters
- Relational operators (`>`, `>=`, `<`, `<=`, `!=`)
- Logical operators (`&&`, `||`)
- Modulus operator for divisibility and leap-year checks
- Range-based classification
- Floating-point input and validation
- Ordering conditions so more specific cases are checked first
- Testing boundary and edge cases

## Placement Preparation

Practise explaining and solving these common beginner-level interview questions:

1. Find the greatest of three numbers, including cases where two or more values are equal.
2. Explain why leap years are divisible by 400 or divisible by 4 but not by 100.
3. Convert a marks range into a grade and validate values outside 0–100.
4. Check divisibility by multiple numbers using `%` and logical operators.
5. Classify a character without relying on library functions.

For each solution, be ready to explain:
- The purpose of each condition.
- Why the conditions are checked in that order.
- What happens at boundary values.
- How you would test invalid input.
- The time complexity. These solutions use a fixed number of comparisons, so their time complexity is **O(1)**.

## Suggested Extra Practice
- Find the smallest of three numbers.
- Check whether a year is a century year.
- Validate marks strictly within the range 0–100.
- Check whether a character is a vowel, consonant, digit, or special character.
- Check whether a number is divisible by 3 or 5, and distinguish “either” from “both.”

## Code Quality Notes
- `program5_1.c` does not correctly handle ties for the greatest value. For example, inputs `9 9 3` reach the final `else` and report `3`. Consider handling equality explicitly or adjusting the comparisons.
- `program5_3.c` uses integer-style mark ranges (`75` to `89`, etc.) while accepting a `float`. Values such as `89.5` currently fall through to `Invalid Marks`. Consider using continuous ranges, such as `fMarks >= 75 && fMarks < 90`, if decimal marks are allowed.
- `program5_5.c` uses `scanf("%c", &cValue)`. This works when the character is entered directly at the prompt, but preceding whitespace can be read as the character. `scanf(" %c", &cValue)` skips leading whitespace.
- The examples assume valid input types. For more robust programs, check the return value of `scanf()` before using the input.

---

Part of the C Programming Assignments collection.
