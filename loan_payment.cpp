#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double loan_amount;
    double annual_rate;
    double monthly_rate;
    double monthly_payment;
    double amount_paid_back;
    double interest_paid;
    double payment_factor;
    int number_of_payments;

    cout << "Enter the loan amount: $";
    cin >> loan_amount;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter the number of monthly payments: ";
    cin >> number_of_payments;

    monthly_rate = annual_rate / 100.0 / 12.0;
    payment_factor = pow(1.0 + monthly_rate, number_of_payments);

    monthly_payment = (monthly_rate * payment_factor)
                      / (payment_factor - 1.0) * loan_amount;

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);
    cout << "\nLoan Payment Report\n";
    cout << "------------------------------\n";
    cout << "Loan Amount:          $" << loan_amount << "\n";
    cout << "Monthly Interest Rate: " << monthly_rate * 100.0 << "%\n";
    cout << "Number of Payments:   " << number_of_payments << "\n";
    cout << "Monthly Payment:      $" << monthly_payment << "\n";
    cout << "Amount Paid Back:     $" << amount_paid_back << "\n";
    cout << "Interest Paid:        $" << interest_paid << "\n";

    return 0;
}