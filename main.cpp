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

    // CURRENCY
    int valuesourcecurrency;
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
    cout << "Made by @ardacebi and many others\n\n";

    sleep_for(milliseconds(500));
    sleep_until(system_clock::now() + milliseconds(500));

    do
    {
        cout << "Arculator Menu (insert it's number e.g. 1)\n";
        cout << "\n1. Start";
        cout << "\n2. Settings";
        cout << "\n3. Exit\n\n";

        int initmenuselection;
        cin >> initmenuselection;
        if (initmenuselection == 1)
        {
            int calcselection;
            do
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
                cout << "\n13. Angle";
                cout << "\n14. Go back\n\n";

                cin >> calcselection;

                if (calcselection == 1)
                {
                    string currencyselectedoption = string("\nThe selected option is: ") + string("Currency\n\n");
                    cout << currencyselectedoption;

                    sleep_for(milliseconds(500));
                    sleep_until(system_clock::now() + milliseconds(500));

                    cout << "Input your \033[1;31msource\033[0m value and currency (ISO 4217 format, e.g. 10 USD)\n";
                    cin >> valuesourcecurrency;

                    cout << "Input your \033[1;31mtarget\033[0m currency (ISO 4217 format, e.g. EUR)\n";
                    cin >> targetcurrency;
                }
                else if (calcselection == 14)
                {
                    break;
                }
            } while (true);
        }
        else if (initmenuselection == 2)
        {
            do
            {
                cout << "\nSettings\n\n";
                cout << "1. Menu options\n";
                cout << "2. Delay options\n";
                cout << "3. Currency provider\n";
                cout << "4. Go back\n\n";

                int settingsselection;
                cin >> settingsselection;

                if (settingsselection == 1)
                {
                    do
                    {
                        cout << "\n1. Enable 'Skip menu on launch'? (1/0)\n";
                        cin >> skipmenu;

                        if (skipmenu == 1)
                        {
                            cout << "\n'Skip menu on launch' has been enabled.\n";
                            break;
                        }
                        else if (skipmenu == 0)
                        {
                            cout << "\n'Skip menu on launch' has been disabled.\n";
                            break;
                        }
                        else
                        {
                            cout << "\nYour input is not valid.\n";
                        }
                    } while (true);
                }
                else if (settingsselection == 4)
                {
                    break;
                }
            } while (true);
        }
        else if (initmenuselection == 3)
        {
            break;
        }
        else
        {
            cout << "\n \033[1;31mWARN:\033[0m Invalid input, try again.\n\n";
        }
    } while (true);

    return 0;
}
