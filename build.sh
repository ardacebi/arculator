mkdir build
cd build

g++ -std=c++17 -c ../src/arculator.cpp -o main.out
g++ -std=c++17 -c ../src/partials/intro.cpp -o intro.out
g++ -std=c++17 -c ../src/partials/menu.cpp -o menu.out
g++ -std=c++17 -c ../src/partials/invalidinput.cpp -o invalidinput.out
g++ -std=c++17 -c ../src/partials/programs/angle.cpp -o angle.out
g++ -std=c++17 -c ../src/partials/programs/area.cpp -o area.out
g++ -std=c++17 -c ../src/partials/programs/data.cpp -o data.out
g++ -std=c++17 -c ../src/partials/programs/energy.cpp -o energy.out
g++ -std=c++17 -c ../src/partials/programs/length.cpp -o length.out
g++ -std=c++17 -c ../src/partials/programs/power.cpp -o power.out
g++ -std=c++17 -c ../src/partials/programs/pressure.cpp -o pressure.out
g++ -std=c++17 -c ../src/partials/programs/speed.cpp -o speed.out
g++ -std=c++17 -c ../src/partials/programs/temperature.cpp -o temperature.out
g++ -std=c++17 -c ../src/partials/programs/time.cpp -o time.out
g++ -std=c++17 -c ../src/partials/programs/volume.cpp -o volume.out
g++ -std=c++17 -c ../src/partials/programs/weight.cpp -o weight.out

g++ -o arculator main.out intro.out menu.out invalidinput.out angle.out area.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out
rm main.out intro.out menu.out invalidinput.out angle.out area.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out