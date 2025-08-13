#include <iostream>
using namespace std;

void binaryToDecimal(int conInput){
	
}

void demo(int min, int max){
	
	int number = rand() % (max - min + 1) + min;
	cout << "The random number is : " << number;
	
}

int main() {
	
	int choice;
	int min = 0;
	int max = 99;
	float conInput;
	
	cout << "conversion menu:\n";
	cout << "1. convert Binary to Decimal\n";
	cout << "2. convert Decimal to Binary\n";
	cout << "3. convert Hexadecimal to Decimal\n";
	cout << "4. convert Decimal to Hexadecimal\n";
	cout << "5. Demo\n";
	cout << "6. Exit\n";
	
	cout << "Enter your choice (1 - 6): ";
	cin >> choice;
	
	if (choice == 1){
		cout << "Enter the binary number you would like to convert: ";
		cin >> conInput;
		binaryToDecimal(conInput);
	}else if (choice == 2){
		
	}else if (choice == 3){
		
	}else if (choice == 4){
		
	}else if (choice == 5){
		demo(min,max);
	}else if (choice == 6){
		
	}
	else{
		cout << "Invalid choice! Your choice should be from 1 - 6";
	}
}
	
