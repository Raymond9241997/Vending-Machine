#include <iostream>

using namespace std;

int main()
{

	int Coke = 10;
	int Pepsi = 10;
	int Water = 10;
	int Choice;

	float Dollar = 1, Quarter = 0.25, Dime = 0.10, Nickel = 0.05;

	cout << "Arya Vending Machine\n\n";


	while (Coke > 0 || Pepsi >0 || Water > 0  ) {
		printf("\nDrinks Available\n1: Coke: $0.55\n2: Pepsi: $0.45\n3: Water: $0.85\n\nPlease enter number corresponding to the drink\n");
		cin >> Choice;
		switch (Choice) {
		case 1:
			if (Coke > 0) {
				Coke--;
				cout << Coke << " Coke left\n";
			}
			else{
				cout << "\nNo Coke left\n";
			}

			break;
		case 2:
			if (Pepsi > 0) {
				Pepsi--;
				cout << Pepsi << " Pepsi left\n";
			}
			else {
				cout << "\nNo Pepsi left\n";
			}
			break;
		case 3:
			if (Water > 0) {
				Water--;
				cout << Water << " Water left\n";
			}
			else {
				cout << "\nNo Water left\n";
			}
			break;
		default:
			printf("Your entry was invalid. Please try again.\n");
		}
	}

	printf("\n***You ran out\n");

	system("pause");
	//	
	return 0;
}
