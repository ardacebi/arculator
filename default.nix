with (import <nixpkgs> {});
stdenv.mkDerivation {
  name = "arculator";

  src = ./.;

  nativeBuildInputs = [
    cmake
  ];
}
