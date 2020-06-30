# Arculator
An advanced terminal based calculator and converter written in C++.

![](https://user-images.githubusercontent.com/17576065/85226949-cc500b00-b3e2-11ea-8610-4594ed70d46e.png)

## Building and Running
### Cmake (recommended)

```
cd build
cmake ..
make
./arculator
```

> If you want faster builds, use the -jthreadcount flag on the "make" (third) step: 

```
make -j2000
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

### Conversion
Arculator offers a conversion mode (inpired by Windows' built-in calculator) which has options like Volume, Length, Temperature and others. 

## Roadmap
- [ ] Complete all unit conversions.
- [ ] Add standard calculating ability.
- [ ] Submit to package managers such as Homebrew for easier usage and convert to a proper command line tool.

## Contributing
Arculator is totally open for contributions from everyone. Make sure to check out the [Code of Conduct](https://github.com/ardacebi/arculator/blob/master/CODE_OF_CONDUCT.md) and the [Contributing Guidelines](https://github.com/ardacebi/arculator/blob/master/CONTRIBUTING.md) before your contributions.

## License
This projects is licensed under the [MIT License](https://github.com/ardacebi/arculator/blob/master/LICENSE).
