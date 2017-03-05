#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	char yesOrNo; 
	string color1; 
	int totalColors,totalDealers, colorQty, total, counter; 

	totalColors = 0;
	totalDealers = 0; 
	colorQty = 0;
	total = 0; 
	counter = 0;


	cout << "Please enter the color you're counting " << endl;
	cin >> color1; 

	cout << "Please enter the number of dealerships with this color " << endl;
	cin >> totalDealers;

	while (counter < totalDealers)
	{
		cout << "please enter the qty of the dealer and hit enter " << endl;
		cin >> colorQty;
		total = total + colorQty;
		colorQty = 0; 
		counter++; 
	}

	cout << "The total # of " << color1 << " counted is: " << total << endl; 

	system("pause");

	return 0; 


}
