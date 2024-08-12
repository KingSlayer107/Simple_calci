# Simple_calci
# Simple C Calculator

## Overview

This program is a basic command-line calculator written in C. It allows the user to perform arithmetic operations such as addition, subtraction, multiplication, division, and exponentiation on two numbers.

## Features

- **Addition (+)**
- **Subtraction (-)**
- **Multiplication (*)**
- **Division (/)**: Handles division by zero to avoid runtime errors.
- **Exponentiation (^)**: Raises the first number to the power of the second number using the `pow()` function.

## Usage

1. Compile the program using a C compiler (e.g., `gcc`):
   ```bash
   gcc -o calculator calculator.c -lm

2. Run the executable:
   ./calculator

3. Follow the prompts to enter two numbers and select an operation.
    If using power function then 2nd num is the power
    Enter the first number: 2
    Enter the second number: 3
    Enter the operation (+, -, *, /, ^): ^
    Result: 8.000000

## Error Handling

1. Division by zero is detected and handled gracefully with an error message.
2. Invalid operators prompt an error message and terminate the program.