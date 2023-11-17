# <center>Mine Detector Fixes</center>
<p align="center">
    <a href="https://github.com/DartRuffian/Mine-Detector-Fixes/releases/latest">
        <img src="https://img.shields.io/badge/Version-1.1.0-blue.svg?style=flat-square" alt="MDF Version">
    </a>
    <a href="https://github.com/DartRuffian/Mine-Detector-Fixes/issues">
        <img src="https://img.shields.io/github/issues-raw/DartRuffian/Mine-Detector-Fixes.svg?style=flat-square&label=Issues" alt="MDF Issues">
    </a>
    <a href="https://github.com/DartRuffian/Mine-Detector-Fixes/releases">
        <img src="https://img.shields.io/steam/downloads/.svg?style=flat-square&label=Downloads" alt="MDF Downloads">
    </a>
    <a href="https://github.com/DartRuffian/Mine-Detector-Fixes/blob/main/LICENSE">
        <img src="https://img.shields.io/badge/License-APL-red.svg?style=flat-square" alt="MDF License">
    </a>
</p>

**Mine-Detector-Fixes** (MDF) aims to serve as an "all-in-one" mod to fix various mods breaking vanilla mine detectors, which can be very frustrating for players.

The project is entirely **open-source** and any contributions to fix other mods are welcome.

While containing fixes for several mods, only patches for mods that players have enabled when launching arma will be loaded using the `skipWhenMissingDependencies` flag. This ensures that missing addon or missing class errors will not occur.

## Available Patches

- [Just Like The Simulations - The Great War](https://steamcommunity.com/sharedfiles/filedetails/?id=1940589429)
- [Just Like The Simulations - Contraband](https://steamcommunity.com/sharedfiles/filedetails/?id=1875369298)

## Contributing

Users are welcome to create a compatability patch for a mod by using the [example patch](https://github.com/DartRuffian/Mine-Detector-Fixes/tree/main/extras/compat) as a base.

### Submitting issues and requesting patches

If you find a bug in the mod or want to request a compatability patch for another mod, you can do so on the [Issue Tracker](https://github.com/DartRuffian/Mine-Detector-Fixes/issues). Be sure to apply the appropiate label for what you are reporting.

### Testing & building

MDF is built using [HEMTT](https://github.com/BrettMayson/HEMTT). There are several build files included in [Tools/](https://github.com/DartRuffian/Mine-Detector-Fixes/tree/main/Tools) to automatically update the mod version when building and releasing.

## License

ACE3 is licensed under the Arma Public Licence ([APL](https://github.com/DartRuffian/Mine-Detector-Fixes/blob/main/LICENSE)).