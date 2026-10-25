#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    int quantity;
    double price = 0.0;
    double total = 0.0;

    // Display Kiosk Menu
    cout << "====================================" << endl;
    cout << "       SELF-SERVICE KIOSK           " << endl;
    cout << "====================================" << endl;
    cout << "1. Combo Meal A (RM 12.00)" << endl;
    cout << "2. Combo Meal B (RM 15.00)" << endl;
    cout << "3. Combo Meal C (RM 18.00)" << endl;
    cout << "====================================" << endl;
    cout << "Enter menu choice (1-3): ";
    cin >> choice;

    // Selection Control Structure: Determine Price
    if (choice == 1) {
        price = 12.00;
    }
    else if (choice == 2) {
        price = 15.00;
    }
    else if (choice == 3) {
        price = 18.00;
    }
    else {
        cout << "Invalid menu choice selected!" << endl;
        return 1;
    }

    // Input Quantity
    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid quantity!" << endl;
        return 1;
    }

    // Sequence Control Structure: Calculation
    total = price * quantity;

    // Output Final Total
    cout << fixed << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Final Total Amount: RM " << total << endl;
    cout << "Thank you for your order!" << endl;

    return 0;
}