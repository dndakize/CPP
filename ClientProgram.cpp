#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double limit, price, qty, value;
        
        cout << "\n--- Customer " << i << " ---" << endl;
        cout << "Enter credit limit: ";
        cin >> limit;
        cout << "Enter item price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> qty;

        value = price * qty;

        while (value > limit) {
            cout << "Sorry you cannot purchase goods worthy such a value on credit.\n";
            cout << "Please re-enter the quantity: ";
            cin >> qty;
            value = price * qty; // Recalculate value with new quantity
        }

        cout << "Thank You for purchasing from us.\n";
        cout << "Total value of the purchase: " << value << endl;
    }

    return 0;
}
