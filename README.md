# CIS-165 Lab 5: Compound Interest and Loan Payments

## Program Plans

### Program 1: Compound Interest

1. Ask the user to enter the principal balance, annual interest rate as a percentage, and number of times interest is compounded per year.
2. Convert the annual interest percentage into a decimal by dividing it by 100.
3. Use `pow()` to calculate the final savings amount.
4. Calculate interest earned by subtracting the principal from the final amount.
5. Display the interest rate, compounding periods, principal, interest earned, and final amount using two decimal places for monetary values.
6. Test the program with the assigned values and a second set of positive values.

### Program 2: Monthly Loan Payment

1. Ask the user to enter the loan amount, annual interest rate as a percentage, and number of monthly payments.
2. Convert the annual percentage into a monthly decimal rate by dividing by 100 and then by 12.
3. Use `pow()` to calculate the monthly loan payment.
4. Calculate the total amount paid back and total interest paid.
5. Display the loan amount, monthly interest rate, number of payments, monthly payment, total amount paid back, and interest paid.
6. Test the program with the assigned values and a second set of positive values.

## Compound Interest Testing

| Program and test | Inputs | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Compound interest — assigned | Principal: 1000, Rate: 4.25%, Compounded: 12 | Interest: $43.34; Amount: $1043.34 | Interest: $43.34; Amount: $1043.34 | Match |
| Compound interest — changed | Principal: 2000, Rate: 5%, Compounded: 4 | Interest: $75.95; Amount: $2075.95 | Interest: $75.95; Amount: $2075.95 | Match |

## Loan Payment Testing

| Program and test | Inputs | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Loan payment — assigned | Loan: $10000, Rate: 12%, Payments: 36 | Monthly rate: 1.00%; Payment: $332.14; Total: $11957.15; Interest: $1957.15 | Monthly rate: 1.00%; Payment: $332.14; Total: $11957.15; Interest: $1957.15 | Match |
| Loan payment — changed | Loan: $5000, Rate: 6%, Payments: 24 | Monthly rate: 0.50%; Payment: $221.60; Total: $5318.45; Interest: $318.45 | Monthly rate: 0.50%; Payment: $221.60; Total: $5318.45; Interest: $318.45 | Match |

## Understanding the Programs

**1. Why must a percentage be divided by 100 before using it in a formula?**

A percentage must be divided by 100 to convert it into a decimal. For example, 4.25% becomes 0.0425, which can be used correctly in the formula.

**2. How does pow represent exponentiation?**

The `pow()` function raises a number to a specified power. For example, `pow(2.0, 3)` calculates 2 raised to the third power, which equals 8.

**3. What does the number of compounding periods change in the savings formula?**

It changes how often interest is added to the savings balance during the year. More frequent compounding can produce a different final amount.

**4. How is an annual interest rate converted to a monthly rate?**

First, divide the annual percentage rate by 100 to convert it into a decimal. Then divide by 12 to get the monthly decimal rate.

**5. Why should double be used for these calculations?**

`double` stores decimal numbers and provides enough precision for financial calculations involving interest and payments.

**6. Why should calculations use full precision when money is displayed to two decimal places?**

Rounding intermediate calculations can introduce errors. Keeping full precision until displaying the result helps make the final calculations more accurate.

**7. How are the amount paid back and total interest calculated?**

The amount paid back is the monthly payment multiplied by the number of payments. Total interest is the amount paid back minus the original loan amount.

**8. Why are calculations stored in variables before being displayed?**

Variables make calculations easier to read, test, debug, and reuse. They also follow the course rule against putting formulas directly inside `cout`.

## Compile and Run Instructions

Compile the compound interest program:

`g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest`

Run it:

`./compound_interest`

Compile the loan payment program:

`g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment`

Run it:

`./loan_payment`

These commands work in a terminal with a compatible C++ compiler. On Windows, the executable names and run commands may differ depending on the environment.