// MIT License

// Copyright (c) 2020 Arda Çebi

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

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

// Include partials
#include "partials/init.h"
#include "partials/menu.h"

// Include programs
#include "partials/programs/angle.h"
#include "partials/programs/area.h"
#include "partials/programs/data.h"
#include "partials/programs/energy.h"
#include "partials/programs/length.h"
#include "partials/programs/power.h"
#include "partials/programs/pressure.h"
#include "partials/programs/speed.h"
#include "partials/programs/temperature.h"
#include "partials/programs/time.h"
#include "partials/programs/volume.h"
#include "partials/programs/weight.h"

int main() {
  using namespace std;
  using namespace std::this_thread;
  using namespace std::chrono;

  // USER CONFIG
  bool skipmenu;

  // SETTING INPUTS (ignore)
  char *skipmenuinput;

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

  Initiate();

  do {
    cout << "Arculator Menu (insert it's number e.g. 1)\n" << endl;
    cout << "1. Start" << endl;
    cout << "2. Exit\n" << endl;

    int initmenuselection;
    cin >> initmenuselection;
    if (initmenuselection == 1) {
      int calcselection;
      do {
        cout << "\nWhat kind of conversion would you like to do? (insert it's "
                "number e.g. 1)\n"
             << endl;
        cout << "1. Volume" << endl;
        cout << "2. Length" << endl;
        cout << "3. Weight and Mass" << endl;
        cout << "4. Temperature" << endl;
        cout << "5. Energy" << endl;
        cout << "6. Area" << endl;
        cout << "7. Speed" << endl;
        cout << "8. Time" << endl;
        cout << "9. Power" << endl;
        cout << "10. Data" << endl;
        cout << "11. Pressure" << endl;
        cout << "12 Angle" << endl;
        cout << "13. Go back\n" << endl;

        cin >> calcselection;

        if (calcselection == 1) {
          VolumeConversion();
        } else if (calcselection == 2) {
          LengthConversion();
        } else if (calcselection == 3) {
          WeightConversion();
        } else if (calcselection == 4) {
          TemperatureConversion();
        } else if (calcselection == 5) {
          EnergyConversion();
        } else if (calcselection == 6) {
          AreaConversion();
        } else if (calcselection == 7) {
          SpeedConversion();
        } else if (calcselection == 8) {
          TimeConversion();
        } else if (calcselection == 9) {
          PowerConversion();
        } else if (calcselection == 10) {
          DataConversion();
        } else if (calcselection == 11) {
          PressureConversion();
        } else if (calcselection == 12) {
          AngleConversion();
        } else if (calcselection == 13) {
          break;
        }
      } while (true);
    } else if (initmenuselection == 2) {
      break;
    } else {
      cout << "\n \033[1;31mWARN:\033[0m Invalid input, try again.\n" << endl;
    }
  } while (true);

  return 0;
}