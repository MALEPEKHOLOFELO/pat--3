#include <iostream>
using namespace std;

int main() {
	const int MAX_ORDERS = 50;
	string OrderID[MAX_ORDERS];
	string CustomerName[MAX_ORDERS];
	int NumberOfMangwinya[MAX_ORDERS];
	float TotalCost[MAX_ORDERS];

    OrderID[0] = "101"; CustomerName[0] = "Thabo"; NumberOfMangwinya[0] = 3; TotalCost[0] = 15.50;
    OrderID[1] = "102"; CustomerName[1] = "Lerato"; NumberOfMangwinya[1] = 5; TotalCost[1] = 30.00;
    OrderID[2] = "103"; CustomerName[2] = "Nomvulo"; NumberOfMangwinya[2] = 2; TotalCost[2] = 10.00;
    OrderID[3] = "104"; CustomerName[3] = "Sipho"; NumberOfMangwinya[3] = 4; TotalCost[4] = 22.00;
    
    for (int i = 4; i < MAX_ORDERS; i++) {
    	OrderID[i] = "0";
    	CustomerName[i] = "";
    	NumberOfMangwinya[i] = 0;
    	TotalCost[i] = 0.0;
    	
	}
	
	for(int i = 0; i < 4; i++){
		cout << "OrderID: " << OrderID[i] << ", Customer: " << CustomerName[i] << ", Mangwinya: " << TotalCost[i];
	}
	
	return 0;
	
}