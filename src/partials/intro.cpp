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
#include "intro.h"

void Intro() {
  using namespace std;
  using namespace std::this_thread;
  using namespace std::chrono;

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
  cout << "Made by Arda Çebi (@ardacebi)\n" << endl;

  sleep_for(milliseconds(500));
  sleep_until(system_clock::now() + milliseconds(500));
}
