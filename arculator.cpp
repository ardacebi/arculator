// Copyright (c) 2020 Arda Çebi. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono;      // nanoseconds, system_clock, seconds

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

    printf(R"EOF(
    ___    ____  ________  ____    ___  __________  ____ 
   /   |  / __ \/ ____/ / / / /   /   |/_  __/ __ \/ __ \
  / /| | / /_/ / /   / / / / /   / /| | / / / / / / /_/ /
 / ___ |/ _, _/ /___/ /_/ / /___/ ___ |/ / / /_/ / _, _/ 
/_/  |_/_/ |_|\____/\____/_____/_/  |_/_/  \____/_/ |_|  
                                                         
)EOF");

    std::cout << "Welcome to ARCULATOR - The Advanced Terminal Calculator and Converter\n";
    std::cout << "Made by Arda Çebi (@ardacebi)\n\n";

    sleep_for(milliseconds(500));
    sleep_until(system_clock::now() + milliseconds(500));

    std::cout << "What kind of conversion would you like to do? (insert it's number e.g. 1)\n";
    std::cout << "\n1. Currency";
    std::cout << "\n2. Volume";
    std::cout << "\n3. Length";
    std::cout << "\n4. Weight and Mass";
    std::cout << "\n5. Temperature";
    std::cout << "\n6. Energy";
    std::cout << "\n7. Area";
    std::cout << "\n8. Speed";
    std::cout << "\n9. Time";
    std::cout << "\n10. Power";
    std::cout << "\n11. Data";
    std::cout << "\n12. Pressure";
    std::cout << "\n13. Angle\n\n";

    std::cin >> calcselection;

    if (calcselection == 1)
    {

        std::string currencyselectedoption = std::string("\nThe selected option is: ") + std::string("Currency\n\n");
        std::cout << currencyselectedoption;

        std::cout << "Input your \033[1;31msource\033[0m currency (ISO 4217 format, e.g. USD)\n";
        std::cin >> sourcecurrency;

        std::cout << "Input your \033[1;31mtarget\033[0m currency (ISO 4217 format, e.g. USD)\n";
        std::cin >> targetcurrency;
    }

    return 0;
}
