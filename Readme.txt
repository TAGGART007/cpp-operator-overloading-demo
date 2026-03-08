# OperatorOverloadDemo

**OperatorOverloadDemo** is a C++ console application designed to demonstrate the concept of **operator overloading**. The project allows a custom class to define behavior for arithmetic and increment/decrement operators, showcasing how C++ supports polymorphic operator behavior.

## Features

- **Custom Class (`overload`):**  
  Contains a private integer member `number` and supports multiple constructors.

- **Operator Overloading Demonstrated:**
  - `++` (pre-increment)
  - `--` (pre-decrement)
  - `+` (addition of two objects)
  - `-` (subtraction of two objects)
  - `*` (multiplication of two objects)
  - `/` (division of two objects)

- **Display Function:**  
  Shows the current value of the object after operations.

## Prerequisites

- C++ compiler (e.g., GCC, MinGW, or Visual Studio)
- Basic knowledge of C++ classes and objects

## How to Run

1. Open the terminal or command prompt.
2. Compile the program:

```bash
g++ main.cpp -o OperatorOverloadDemo