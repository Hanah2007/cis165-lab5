# AI Reflection — Lab 5

## Tools Used

I used ChatGPT to help me understand the assignment, organize my program plans, write the C++ programs, and understand the formulas for compound interest and monthly loan payments. I also used OnlineGDB to compile and run my programs.

## One Programming Decision

One important decision was converting the annual interest percentage into decimal form before using it in the formulas. For the loan program, I divided the annual rate by 100 and then by 12 to calculate the monthly rate. I also stored intermediate calculations in variables instead of putting formulas directly inside output statements.

## Verification

I tested the compound interest program using a principal of $1,000, an annual rate of 4.25%, and 12 compounding periods. It displayed $43.34 in interest and a final amount of $1,043.34. I also tested it with $2,000, 5%, and 4 compounding periods. For the loan program, I tested both the assigned values of $10,000 at 12% over 36 payments and a second case of $5,000 at 6% over 24 payments. The reported outputs matched the expected results.

## Learning

I learned how to use `pow()` for exponentiation, convert percentages into decimal rates, and store financial calculations in variables. I also learned how to test programs using different inputs. I still need more practice understanding the loan payment formula and writing C++ programs independently without relying as much on examples.