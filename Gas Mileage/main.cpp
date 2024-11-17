//
//  main.cpp
//  Gas Mileage
//
//  Created by Amanpreeet Sandhu on 2024-11-17.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Intialize variables
    int milesDriven;
    int gallonsUsed;
    int totalMiles{0};
    int totalGallons{0};
    
    // prompt for input and read milesDriven from user
    cout << "Enter miles Driven(-1 to quit): ";
    cin >> milesDriven;
    
    // Keep taking the input from user while the user inputs -1
    while(milesDriven != -1){
        
        cout << "Enter gallons used: ";
        cin >> gallonsUsed;
        
        // Calculate MPG each trip
        double mpg{static_cast<double>(milesDriven)/gallonsUsed};
        
        // Calculate Total MPG
        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
        double totalMPG{static_cast<double>(totalMiles)/totalGallons};
        
        // Output Results
        cout << setprecision(6) << fixed ;
        cout << "MPG this trip: " << mpg << endl;
        
        cout << setprecision(6) << fixed ;
        cout << "Total MPG: " << totalMPG << endl << endl;
        
        // Prompt the user to enter miles driven and gallons used
        cout << "Enter miles Driven(-1 to quit): ";
        cin >> milesDriven;
    }
    cout << "Program ended" << endl;
}
