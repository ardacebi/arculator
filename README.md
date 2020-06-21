# Arculator
The advanced terminal calculator and converter.

![](https://user-images.githubusercontent.com/17576065/85226949-cc500b00-b3e2-11ea-8610-4594ed70d46e.png)

## Building
### Cmake (recommended)

```
cd build
cmake ..
make
./arculator
```

> If you want faster builds, you can use the multi-core flag on the make (third) step:

```
make -j7
```

### G++
There's a build script for g++ building inside the build folder.
```
cd build
./build.sh
./arculator
```

> If you encounter permission issues, just run the chmod command to make the build script executable (already made by me but in case):

```
chmod 755 build.sh
```

## Features
### Regular Calculation
Arculator (as being a calculator) features a classic calculator mode for your regular calculations that you can use with `+`, `-`, `/`, `*` and others.

### Conversion
Arculator also offers a conversion mode (inpired by Windows' built-in calculator) which has options like Volume, Length, Temperature, Currency (requires connectivity) and others. 

## Roadmap
- [ ] Complete all unit conversions.
- [ ] Add standard calculating ability.
- [ ] Submit to package managers such as Homebrew for easier usage and convert to a proper command line tool.

## Contributing
Arculator is totally open for contributions from everyone. Make sure to check out the [Code of Conduct](https://github.com/ardacebi/arculator/blob/master/CODE_OF_CONDUCT.md) and the [Contributing Guidelines](https://github.com/ardacebi/arculator/blob/master/CONTRIBUTING.md) before your contributions.
