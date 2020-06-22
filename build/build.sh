g++ -std=c++17 -c ../main.cpp -o main.out
g++ -std=c++17 -c ../partials/intro.cpp -o intro.out
g++ -std=c++17 -c ../partials/menu.cpp -o menu.out
g++ -std=c++17 -c ../partials/invalidinput.cpp -o invalidinput.out
g++ -std=c++17 -c ../partials/programs/angle.cpp -o angle.out
g++ -std=c++17 -c ../partials/programs/area.cpp -o area.out
g++ -std=c++17 -c ../partials/programs/data.cpp -o data.out
g++ -std=c++17 -c ../partials/programs/energy.cpp -o energy.out
g++ -std=c++17 -c ../partials/programs/length.cpp -o length.out
g++ -std=c++17 -c ../partials/programs/power.cpp -o power.out
g++ -std=c++17 -c ../partials/programs/pressure.cpp -o pressure.out
g++ -std=c++17 -c ../partials/programs/speed.cpp -o speed.out
g++ -std=c++17 -c ../partials/programs/temperature.cpp -o temperature.out
g++ -std=c++17 -c ../partials/programs/time.cpp -o time.out
g++ -std=c++17 -c ../partials/programs/volume.cpp -o volume.out
g++ -std=c++17 -c ../partials/programs/weight.cpp -o weight.out

g++ -o arculator main.out intro.out menu.out invalidinput.out angle.out area.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out
rm main.out intro.out menu.out invalidinput.out angle.out area.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out
