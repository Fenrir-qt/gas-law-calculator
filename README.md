# Gas Law Calculator

The **Gas Law Calculator** is a console-based application written in C++ that allows users to calculate various properties of gases using fundamental gas laws. It provides an interactive interface to solve for missing variables in the following laws:

- **Charles' Law**
- **Boyle's Law**
- **Gay-Lussac's Law**
- **Avogadro's Law**
- **Ideal Gas Law**

## Features

- **Interactive Interface**: Users can select a gas law and specify the variable they want to calculate.
- **Step-by-Step Calculations**: The program displays detailed steps for each calculation.
- **Comprehensive Coverage**: Supports all major gas laws with multiple calculation options.

## How It Works

1. The program displays a menu of gas laws.
2. Users select a law and specify the variable they want to calculate.
3. The program prompts for the required inputs and computes the result.
4. Results are displayed with detailed calculations.

## Gas Laws Supported

### 1. Charles' Law
- Equation: `(v1 / t1) = (v2 / t2)`
- Variables:
  - `v1`: Initial Volume
  - `v2`: Final Volume
  - `t1`: Initial Temperature
  - `t2`: Final Temperature

### 2. Boyle's Law
- Equation: `(p1 * v1) = (p2 * v2)`
- Variables:
  - `p1`: Initial Pressure
  - `p2`: Final Pressure
  - `v1`: Initial Volume
  - `v2`: Final Volume

### 3. Gay-Lussac's Law
- Equation: `(p1 / t1) = (p2 / t2)`
- Variables:
  - `p1`: Initial Pressure
  - `p2`: Final Pressure
  - `t1`: Initial Temperature
  - `t2`: Final Temperature

### 4. Avogadro's Law
- Equation: `(v1 / n1) = (v2 / n2)`
- Variables:
  - `v1`: Initial Volume
  - `v2`: Final Volume
  - `n1`: Initial Amount of Gas (moles)
  - `n2`: Final Amount of Gas (moles)

### 5. Ideal Gas Law
- Equation: `PV = nRT`
- Variables:
  - `P`: Pressure
  - `V`: Volume
  - `n`: Number of Moles
  - `T`: Temperature
  - `R`: Ideal Gas Constant (8.314 J/(mol·K))

## File Structure

- **[main.cpp](main.cpp)**: Contains the main program logic and user interface.
- **[formula.cpp](formula.cpp)**: Implements the calculations for each gas law.
- **[formula.h](formula.h)**: Header file with function declarations and shared variables.
- **[Makefile.win](Makefile.win)**: Makefile for building the project using Dev-C++.


