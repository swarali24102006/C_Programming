# Assignment 6 — Conditional Logic and Practical Calculations in C

## Overview
This assignment applies C decision-making and arithmetic to practical scenarios such as electricity billing, admission eligibility, purchase discounts, triangle validation, and employee bonuses.

The programs practise turning a set of rules into conditional logic, validating user input, and organizing solutions into user-defined functions. These are useful foundations for placement coding rounds and technical interviews.

## Problems Covered

| Source File | Problem | Key Concepts |
|---|---|---|
| `program6_1.c` | Calculate an electricity bill from consumed units | `for` loop, slab-based calculation, arithmetic, invalid-input checks |
| `program6_2.c` | Check admission eligibility using marks and age | Multiple parameters, logical operators (`&&`, `||`), validation |
| `program6_3.c` | Calculate the payable amount after a purchase discount | Percentage calculation, `if-else if-else`, floating-point arithmetic |
| `program6_4.c` | Check whether three side lengths form a valid triangle | Triangle inequality, logical operators, validation |
| `program6_5.c` | Calculate a bonus based on salary and years of service | Percentage calculation, range-based conditions, input validation |

## Requirements
- A C compiler such as GCC (MinGW-w64 on Windows)
- A terminal or IDE such as Visual Studio Code

Check whether GCC is available:

```bash
gcc --version
```

## Compile and Run

Compile each source file separately because every program has its own `main()` function.

Example:

```bash
gcc program6_1.c -o program6_1
```

Run on **Windows PowerShell**:

```powershell
.\program6_1.exe
```

Run on **Linux/macOS**:

```bash
./program6_1
```

Replace `program6_1` with the program name you want to run.

## Sample Test Cases

| Program | Input | Expected result |
|---|---|---|
| `program6_1.c` | `50` units | Bill = `250` |
| `program6_1.c` | `150` units | Bill = `850` |
| `program6_1.c` | `-5` units | Invalid Units Consumption |
| `program6_2.c` | Marks `75`, age `18` | Eligible for Admission |
| `program6_2.c` | Marks `55`, age `18` | Not Eligible |
| `program6_2.c` | Marks `105`, age `18` | Invalid Input |
| `program6_3.c` | Amount `800` | Payable Amount = `800` |
| `program6_3.c` | Amount `2000` | Payable Amount = `1800` |
| `program6_3.c` | Amount `6000` | Payable Amount = `4800` |
| `program6_3.c` | Amount `-1` | Invalid Amount |
| `program6_4.c` | Sides `3 4 5` | Valid Triangle |
| `program6_4.c` | Sides `1 2 3` | Invalid Triangle |
| `program6_4.c` | Sides `-2 4 5` | Invalid Triangle |
| `program6_5.c` | Salary `30000`, service `3` | Bonus is calculated at 5%, but is not displayed by the current program |
| `program6_5.c` | Salary `30000`, service `7` | Bonus is calculated at 10%, but is not displayed by the current program |
| `program6_5.c` | Salary `30000`, service `12` | Bonus is calculated at 15%, but is not displayed by the current program |

*The electricity-bill examples reflect the tariff logic currently implemented in `program6_1.c` (first 100 units at 5 per unit, next 100 at 7 per unit, and remaining units at 10 per unit). These are practice rates defined by the code, not a real utility tariff.*

## Key Concepts Practised
- User-defined functions with multiple parameters
- Conditional statements and condition ordering
- Relational and logical operators
- Percentage and slab-based calculations
- Input validation and early `return`
- Applying mathematical rules to programming problems
- Testing normal, invalid, and boundary inputs

## Placement Preparation

Practise explaining and re-solving these common entry-level interview questions:

1. Calculate a bill using different consumption slabs.
2. Check eligibility using more than one condition.
3. Apply discount percentages to different purchase ranges.
4. Validate a triangle using the triangle inequality.
5. Calculate an employee bonus based on years of service.

For every solution, be prepared to explain:
- Why each condition is required.
- Why conditions are checked in a particular order.
- What happens at the boundary values (for example, exactly 100 units, exactly 5 years, or exactly ₹1,000).
- How invalid inputs are handled.
- The time complexity. These programs use a fixed number of checks or a loop with a fixed number of slab iterations, so the work is **O(1)** with respect to the input size.

## Suggested Extra Practice
- Add a maximum electricity-unit or tariff validation rule.
- Create a discount calculator with more discount slabs.
- Classify a triangle as equilateral, isosceles, or scalene after validating it.
- Return and print the bonus amount.
- Check `scanf()` return values and reject non-numeric input.

## Code Quality Notes
- `program6_5.c` calculates `fBouns` but never prints or returns it. Add a `printf()` statement or return the calculated amount so the result is visible.
- The variable `fBouns` is likely intended to be named `fBonus`; consistent spelling improves readability.
- `program6_4.c` checks for negative sides but allows zero. A triangle must have all three side lengths strictly greater than zero, so consider checking `iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0`.
- `program6_4.c` uses `int` addition in the triangle inequality. Extremely large input values could overflow; more robust code can use a wider integer type.
- The programs assume that `scanf()` succeeds. For robust input handling, verify its return value before using the input.

---

Part of the C Programming Assignments collection.
