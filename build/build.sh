g++ -std=c++17 -c ../main.cpp -o main.out
g++ -std=c++17 -c ../equations/angle.cpp -o angle.out
g++ -std=c++17 -c ../equations/area.cpp -o area.out
g++ -std=c++17 -c ../equations/currency.cpp -o currency.out
g++ -std=c++17 -c ../equations/data.cpp -o data.out
g++ -std=c++17 -c ../equations/energy.cpp -o energy.out
g++ -std=c++17 -c ../equations/length.cpp -o length.out
g++ -std=c++17 -c ../equations/power.cpp -o power.out
g++ -std=c++17 -c ../equations/pressure.cpp -o pressure.out
g++ -std=c++17 -c ../equations/speed.cpp -o speed.out
g++ -std=c++17 -c ../equations/temperature.cpp -o temperature.out
g++ -std=c++17 -c ../equations/time.cpp -o time.out
g++ -std=c++17 -c ../equations/volume.cpp -o volume.out
g++ -std=c++17 -c ../equations/weight.cpp -o weight.out

g++ -o arculator main.out angle.out area.out currency.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out
rm main.out angle.out area.out currency.out data.out energy.out length.out power.out pressure.out speed.out temperature.out time.out volume.out weight.out