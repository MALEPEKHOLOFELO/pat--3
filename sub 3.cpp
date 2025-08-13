#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_ORDERS = 50;

int main() {
    string orderID[MAX_ORDERS];
    string customerName[MAX_ORDERS];
    int numMagwinya[MAX_ORDERS];
    float totalCost[MAX_ORDERS];

    string initOrderID[10] = {"101","102","103","104","105","106","107","108","109","110"};
    string initCustomerName[10] = {"Thabo","Lerato","Nomvula","Sipho","Bongani","Lindiwe","Jabulani","Ayanda","Kgosi","Refilwe"};
    int initNumMagwinya[10] = {3,5,2,4,6,1,3,2,8,4};
    float initTotalCost[10] = {15.75,30.50,10.00,22.00,40.25,5.50,18.00,12.75,28.00,24.50};

    for (int i = 0; i < 10; i++) {
        orderID[i] = initOrderID[i];
        customerName[i] = initCustomerName[i];
        numMagwinya[i] = initNumMagwinya[i];
        totalCost[i] = initTotalCost[i];
    }

    for (int i = 10; i < MAX_ORDERS; i++) {
        orderID[i] = "0";
        customerName[i] = "";
        numMagwinya[i] = 0;
        totalCost[i] = 0.0;
    }

    int choice;
    do {
        cout << "\nOrder Management System\n";
        cout << "1. Add a new order\n";
        cout << "2. Display all orders\n";
        cout << "3. Find an order by Order ID\n";
        cout << "4. Calculate total revenue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            int pos = -1;
            for (int i = 0; i < MAX_ORDERS; i++) {
                if (orderID[i] == "0") {
                    pos = i;
                    break;
                }
            }
            if (pos == -1) {
                cout << "Cannot add more orders. Maximum reached.\n";
            } else {
                string cname;
                int qty;
                float price;
                cout << "Enter customer name: ";
                cin.ignore();
                getline(cin, cname);
                cout << "Enter number of Magwinyas Ordered: ";
                cin >> qty;
                cout << "Enter total cost: ";
                cin >> price;

                int lastID = stoi(orderID[pos - 1]);
                orderID[pos] = to_string(lastID + 1);
                customerName[pos] = cname;
                numMagwinya[pos] = qty;
                totalCost[pos] = price;

                cout << "Order added successfully!\n";
            }

        } else if (choice == 2) {
            bool found = false;
            for (int i = 0; i < MAX_ORDERS; i++) {
                if (orderID[i] != "0") {
                    cout << "Order ID: " << orderID[i] << ", Customer: " << customerName[i]
                         << ", Number of Magwinyas: " << numMagwinya[i]
                         << ", Total: " << fixed << setprecision(2) << totalCost[i] << "\n";
                    found = true;
                }
            }
            if (!found) {
                cout << "No orders to display.\n";
            }

        } else if (choice == 3) {
            string searchID;
            cout << "Enter Order ID to find: ";
            cin >> searchID;
            bool found = false;
            for (int i = 0; i < MAX_ORDERS; i++) {
                if (orderID[i] == searchID) {
                    cout << "Order ID: " << orderID[i] << ", Customer: " << customerName[i]
                         << ", Number of Magwinyas: " << numMagwinya[i]
                         << ", Total: " << fixed << setprecision(2) << totalCost[i] << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Order with ID " << searchID << " not found.\n";
            }

        } else if (choice == 4) {
            float sum = 0.0;
            for (int i = 0; i < MAX_ORDERS; i++) {
                sum += totalCost[i];
            }
            cout << "Total Revenue: " << fixed << setprecision(2) << sum << "\n";
        }

    } while (choice != 5);

    return 0;
}