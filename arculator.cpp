// Copyright (c) Arda Çebi. All rights reserved.
// Licensed under the MIT License.

#include <iostream>

int main()
{
    // MASTER CONVERSION TYPE
    int calcselection;

    // CURRENCY
    int sourcecurrency;
    int targetcurrency;

    // VOLUME
    int sourcevolume;
    int targetvolume;

    // LENGTH
    int sourcelength;
    int targetlength;

    // WEIGHT AND MASS
    int sourceweight;
    int targetweight;

    // TEMPERATURE
    int sourcetemperature;
    int targettemperature;

    // ENERGY
    int sourceenergy;
    int targetenergy;

    // AREA
    int sourcearea;
    int targetarea;
    
    // SPEED
    int sourcespeed;
    int targetspeed;
    
    // TIME
    int sourcetime;
    int targettime;
    
    // POWER
    int sourcepower;
    int targetpower;
    
    // DATA
    int sourcedata;
    int targetdata;
    
    // PRESSURE
    int sourcepressure;
    int targetpressure;
    
    // ANGLE
    int sourceangle;
    int targetangle;

    std::cout << "Welcome to ARCULATOR - The Advanced Terminal Calculator and Converter."

    std::cout << "What kind of conversion would you like to do? (insert it's number e.g. 1)";
    std::cout << "\n1. Currency\n\n";
    std::cout << "\n2. Volume\n\n";
    std::cout << "\n3. Length\n\n";
    std::cout << "\n4. Weight and Mass\n\n";
    std::cout << "\n5. Temperature\n\n";
    std::cout << "\n6. Energy\n\n";
    std::cout << "\n7. Area\n\n";
    std::cout << "\n8. Speed\n\n";
    std::cout << "\n9. Time\n\n";
    std::cout << "\n10. Power\n\n";
    std::cout << "\n11. Data\n\n";
    std::cout << "\n12. Pressure\n\n";
    std::cout << "\n13. Angle\n\n";

    std::cin >> calcselection;

    if (calcselection == "1")
    {
        std::cout << "The selected option is: " + "Currency";
        std::cout << "Input your source currency (ISO 4217 format, e.g. USD)";

        std::cin >> sourcecurrency;

        std::cout << "Input your \e[1mBold\e[0m non-bold currency (ISO 4217 format, e.g. USD)";
    }
}

return 0;