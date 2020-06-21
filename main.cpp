// MIT License

// Copyright (c) 2020 Arda Çebi

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <chrono>
#include <iostream>
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

int main() {
  using namespace std;
  using namespace std::this_thread;
  using namespace std::chrono;

  // USER CONFIG
  bool skipmenu;

  // SETTING INPUTS (ignore)
  char *skipmenuinput;

  // CURRENCY
  string valuesourcecurrency;
  string targetcurrency;

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

  cout << string(50, '\n');

  printf(R"EOF(
    ___    ____  ________  ____    ___  __________  ____ 
   /   |  / __ \/ ____/ / / / /   /   |/_  __/ __ \/ __ \
  / /| | / /_/ / /   / / / / /   / /| | / / / / / / /_/ /
 / ___ |/ _, _/ /___/ /_/ / /___/ ___ |/ / / /_/ / _, _/ 
/_/  |_/_/ |_|\____/\____/_____/_/  |_/_/  \____/_/ |_|  
                                                         
)EOF");

  cout
      << "Welcome to ARCULATOR - The Advanced Terminal Calculator and Converter"
      << endl;
  cout << "Made by @ardacebi and many others\n" << endl;

  sleep_for(milliseconds(500));
  sleep_until(system_clock::now() + milliseconds(500));

  do {
    cout << "Arculator Menu (insert it's number e.g. 1)\n" << endl;
    cout << "1. Start" << endl;
    cout << "2. Settings" << endl;
    cout << "3. Exit\n" << endl;

    int initmenuselection;
    cin >> initmenuselection;
    if (initmenuselection == 1) {
      int calcselection;
      do {
        cout << "\nWhat kind of conversion would you like to do? (insert it's "
                "number e.g. 1)\n"
             << endl;
        cout << "1. Currency" << endl;
        cout << "2. Volume" << endl;
        cout << "3. Length" << endl;
        cout << "4. Weight and Mass" << endl;
        cout << "5. Temperature" << endl;
        cout << "6. Energy" << endl;
        cout << "7. Area" << endl;
        cout << "8. Speed" << endl;
        cout << "9. Time" << endl;
        cout << "10. Power" << endl;
        cout << "11. Data" << endl;
        cout << "12. Pressure" << endl;
        cout << "13. Angle" << endl;
        cout << "14. Go back\n" << endl;

        cin >> calcselection;

        if (calcselection == 1) {
          string currencyselectedoption =
              string("\nThe selected option is: ") + string("Currency\n");
          cout << currencyselectedoption << endl;

          sleep_for(milliseconds(500));
          sleep_until(system_clock::now() + milliseconds(500));

          cout << "Input your \033[1;31msource\033[0m value and currency (ISO "
                  "4217 format, e.g. 10 USD)"
               << endl;
          cin >> valuesourcecurrency;

          cout << "Input your \033[1;31mtarget\033[0m currency (ISO 4217 "
                  "format, e.g. EUR)"
               << endl;
          cin >> targetcurrency;
        } else if (calcselection == 14) {
          break;
        }
      } while (true);
    } else if (initmenuselection == 2) {
      do {
        cout << "\nSettings\n" << endl;
        cout << "1. Menu options" << endl;
        cout << "2. Delay options" << endl;
        cout << "3. Currency provider" << endl;
        cout << "4. Go back\n" << endl;

        int settingsselection;
        cin >> settingsselection;

        if (settingsselection == 1) {
          do {
            cout << "\n1. Enable 'Skip menu on launch'? (y/N)" << endl;
            cin >> skipmenuinput;

            if (skipmenuinput == "y" || "Y") {
              bool skipmenu = true;
              cout << "\n\e[1m'Skip menu on launch' has been enabled.\e[0m" << endl;
              break;
            } else if (skipmenuinput == "N" || "n") {
              bool skipmenu = false;
              cout << "\n\e[1m'Skip menu on launch' has been disabled.\e[0m" << endl;
              break;
            } else {
              cout << "\n \033[1;31mWARN:\033[0m Invalid input, try again."
                   << endl;
            }
          } while (true);
        } else if (settingsselection == 4) {
          break;
        } else {
          cout << "\n \033[1;31mWARN:\033[0m Invalid input, try again." << endl;
        }
      } while (true);
    } else if (initmenuselection == 3) {
      break;
    } else {
      cout << "\n \033[1;31mWARN:\033[0m Invalid input, try again.\n" << endl;
    }
  } while (true);

  return 0;
}