// Copyright (c) 2020 Arda Çebi. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

#include <iostream>
#include <chrono>
#include <thread>

// Include equations
#include "equations/angle.h"
#include "equations/area.h"
#include "equations/currency.h"
#include "equations/data.h"
#include "equations/energy.h"
#include "equations/length.h"
#include "equations/power.h"
#include "equations/pressure.h"
#include "equations/speed.h"
#include "equations/temperature.h"
#include "equations/time.h"
#include "equations/volume.h"
#include "equations/weight.h"

int main()
{
    using namespace std;
    using namespace std::this_thread;
    using namespace std::chrono;

    // USER CONFIG
    int skipmenu;

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

    cout << "Welcome to ARCULATOR - The Advanced Terminal Calculator and Converter\n";
    cout << "Made by Arda Çebi (@ardacebi)\n\n";

    sleep_for(milliseconds(500));
    sleep_until(system_clock::now() + milliseconds(500));

    cout << "Arculator Menu (insert it's number e.g. 1)\n";
    cout << "\n1. Start";
    cout << "\n2. Settings\n\n";

    int initmenuselection;

    cin >> initmenuselection;

    if (initmenuselection == 1)
    {

        cout << "What kind of conversion would you like to do? (insert it's number e.g. 1)\n";
        cout << "\n1. Currency";
        cout << "\n2. Volume";
        cout << "\n3. Length";
        cout << "\n4. Weight and Mass";
        cout << "\n5. Temperature";
        cout << "\n6. Energy";
        cout << "\n7. Area";
        cout << "\n8. Speed";
        cout << "\n9. Time";
        cout << "\n10. Power";
        cout << "\n11. Data";
        cout << "\n12. Pressure";
        cout << "\n13. Angle\n\n";

        cin >> calcselection;

        if (calcselection == 1)
        {
            string currencyselectedoption = string("\nThe selected option is: ") + string("Currency\n\n");
            cout << currencyselectedoption;

            sleep_for(milliseconds(500));
            sleep_until(system_clock::now() + milliseconds(500));

            cout << "Input your \033[1;31msource\033[0m value and currency (ISO 4217 format, e.g. 10 USD)\n";
            cin >> sourcecurrency;

            cout << "Input your \033[1;31mtarget\033[0m value and currency (ISO 4217 format, e.g. 10 EUR)\n";
            cin >> targetcurrency;
        }

        if (calcselection == 2)
        {
            string volumeselectedoption = string("\nThe selected option is: ") + string("Volume\n\n");
            cout << volumeselectedoption;

            sleep_for(milliseconds(500));
            sleep_until(system_clock::now() + milliseconds(500));

            cout << "Input your \033[1;31msource\033[0m value and currency (ISO 4217 format, e.g. 10 USD)\n";
            cin >> sourcecurrency;

            cout << "Input your \033[1;31mtarget\033[0m value and currency (ISO 4217 format, e.g. 10 EUR)\n";
            cin >> targetcurrency;
        }
    }
    else if (initmenuselection == 2)
    {
        cout << "\nSettings\n\n";

        cout << "1. Menu Options\n";
        cout << "2. Delay Options\n";
        cout << "3. Currency Data\n\n";

        int settingsselection;
        cin >> settingsselection;

        if (settingsselection = 1)
        {
            cout << '1. Enable "Skip menu by default"? (1/0)\n';
            cin >> skipmenu;

            if (skipmenu == 1)
            {
                cout << '"Skip menu by default" has been enabled.\n';
            }
        }
    }

    return 0;
}
