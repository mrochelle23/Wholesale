//
//  main.cpp
//  Wholesale
//
//  Created by Mikhai Rochelle on 6/1/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main() 
    {
        double wholesale;
        double markupPercent;
        double retail;
        
        std::cout << "Enter the item's wholesale cost: ";
        cin >> wholesale;
    
        while (wholesale < 0)
        {
            std::cout << "Enter a non-negative number";
            cin >> wholesale;
        }

        cout << "Enter the item's markup percentage: ";
        cin >> markupPercent;
    
        while (markupPercent < 0)
        {
            std::cout << "Enter a non-negative number";
            cin >> markupPercent;
        }

        retail = calculateRetail(wholesale, markupPercent);
        
        std::cout << "The retail price is $" << setprecision(2)
                << fixed << retail << endl;
        return 0;
}

double calculateRetail (double wholesale, double markupPercent)
{
    double markup = wholesale * markupPercent / 100;
    return wholesale + markup;
}
