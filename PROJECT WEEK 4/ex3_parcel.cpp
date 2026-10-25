#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char zone;
    double weight, totalCost = 0.0;

    cout << "====================================" << endl;
    cout << "      PARCEL SHIPPING CALCULATOR    " << endl;
    cout << "====================================" << endl;
    cout << "Enter Destination Zone (A = Local, B = International): ";
    cin >> zone;

    // Convert zone to uppercase if user enters lowercase
    zone = toupper(zone);

    cout << "Enter Parcel Weight (in kg): ";
    cin >> weight;

    if (weight <= 0) {
        cout << "Invalid weight entered!" << endl;
        return 1;
    }

    // Selection Control Structure
    if (zone == 'A') {
        if (weight <= 2.0) {
            totalCost = 6.00;
        }
        else {
            totalCost = 6.00 + ((weight - 2.0) * 2.00);
        }
    }
    else if (zone == 'B') {
        if (weight <= 2.0) {
            totalCost = 15.00;
        }
        else {
            totalCost = 15.00 + ((weight - 2.0) * 5.00);
        }
    }
    else {
        cout << "Invalid Zone selected!" << endl;
        return 1;
    }

    // Output Result
    cout << fixed << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Total Shipping Cost: RM " << totalCost << endl;
    cout << "====================================" << endl;

    return 0;
}