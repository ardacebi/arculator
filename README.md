# Arculator
The advanced terminal calculator and converter.

![](https://user-images.githubusercontent.com/17576065/85184071-0a401880-b297-11ea-839d-84c9433d4399.png)

## Building
> **Important:** There's a planned conversion of Arculator to being a proper command line tool rather than a manually built C++ executable. Below are temporary procedures until this transition is successfully completed.

Because of used features, Arculator **needs** to be builded with C++11. Other versions will probably not work.

```
g++ -std=c++11 arculator.cpp -o arculator.out
```

```
./arculator.out
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
