# Wholesale Pricing Calculator

## Overview

The Wholesale Pricing Calculator is a simple console application that calculates the retail price of an item based on its wholesale cost and markup percentage. This program helps users determine the final price they should charge for an item after applying a specified markup.

## Features

- Prompts the user to enter the wholesale cost of an item.
- Accepts the markup percentage and ensures that inputs are non-negative.
- Calculates and displays the retail price based on the input values.

## Technologies Used

- C++

## File Structure

```
wholesale/
│
├── main.cpp          # Main C++ source file containing the program logic
```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/mrochelle23/wholesale.git
   ```
2. Navigate to the project directory:
   ```bash
   cd wholesale
   ```
3. Compile the program using a C++ compiler (e.g., g++):

   ```bash
   g++ main.cpp -o wholesale
   ```

4. Run the executable:
   ```bash
   ./wholesale
   ```

## Usage

- The program prompts you to enter the wholesale cost of the item. Enter a non-negative number.
- Next, it asks for the markup percentage. Again, enter a non-negative number.
- After entering both values, the program will calculate and display the retail price, formatted to two decimal places.

## Example

```
Enter the item's wholesale cost: 50
Enter the item's markup percentage: 20
The retail price is $60.00
```

## STRECH CHALLENGES
- Implement input validation to ensure numeric inputs are correctly formatted.
- Extend the program to handle multiple items in a single run.
- Allow users to save the calculated prices to a file for future reference.
