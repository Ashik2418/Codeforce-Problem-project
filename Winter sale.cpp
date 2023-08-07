#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double discount_percentage, price_after_discount;
    cin >> discount_percentage >> price_after_discount;

    double price_before_discount = price_after_discount / (1 - (discount_percentage / 100));

    // Round up to two decimal places
    price_before_discount = ceil(price_before_discount * 100) / 100;

    // Print the result with two decimal places
    cout << fixed << setprecision(2) << price_before_discount << endl;

    return 0;
}
