#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	char return1; 
	string color1;
	int totalColors,totalDealers, colorQty, total, counter; 

	totalColors = 0;
	totalDealers = 0; 
	colorQty = 0;
	total = 0; 
	counter = 0; 
	return1 = 'y';
	
	

	while (return1 != '#')
	{
		cout << "Please enter the name of the color you're counting and press enter " << endl;
		cin >> color1;


		cout << "Please enter the number of dealerships with this color " << endl;
		cin >> totalDealers;

		while (counter < totalDealers)
		{
			cout << "please enter the qty of " << color1 << " at this dealer and hit enter " << endl;
			cin >> colorQty;
			total = total + colorQty;
			colorQty = 0;
			counter++;
		}

		cout << "The total # of " << color1 << " counted is: " << total << endl;
		counter = 0;
		colorQty = 0;

		cout << "Do you have more to calculate? Type y to continue or # to stop program" << endl;
		cin >> return1;
		
		
	}

	


	return 0; 


}
