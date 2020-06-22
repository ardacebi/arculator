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
#include "partials/intro.h"
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

  Intro();
  Menu();

  return 0;
}