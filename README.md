# NOTICE
This is a fork of RNR, with placeholder-specific changes. The license of the code has also been changed to AGPLv3.

These changes may or may not compile on all platforms/configurations properly.


# RNR's Not Roblox (PLH)
[![GitHub CI Status](https://img.shields.io/github/actions/workflow/status/PlaceholderLabs/rnr/build.yml?branch=trunk&label=builds)](https://github.com/PlaceholderLabs/rnr/actions)

**R**NR's **N**ot **R**oblox (RNR) is a project that aims to recreate the look and feel of classic Roblox with new features while remaining fully compatible with clients from that era. It is built upon an engine that closely resembles Roblox's own at the time, referencing disassemblies of legacy client binaries.

## Features and Goals
There are several goals that RNR-PLH seeks to accomplish, them being;
- Networking via the Tor Network (`zTORNetworking` branch) once upstream server/player can be used reliably
- Whatever silly ideas we come up with in the future

## Building
RNR uses [CMake](https://cmake.org/) as its build system and [GCC](https://gcc.gnu.org/) as its compiler. To build RNR, you must first have the following packages installed:
- [Boost](https://www.boost.org/)
- [OGRE](https://github.com/OGRECave/ogre)
- [Bullet](https://github.com/bulletphysics/bullet3)
- [pugixml](https://github.com/zeux/pugixml)
- [Qt 6](https://www.qt.io/product/qt6) (if building the player or studio projects)

For Windows:
- If you're building ***for*** Windows, [MinGW-w64](https://www.mingw-w64.org/) is the preferred toolset of choice.
- If you're building ***on*** Windows, you may use a platform such as [MSYS2](https://www.msys2.org/), which provides an all-in-one environment for running MinGW or GCC.

Additionally, you must also acquire the `content` folder of the Roblox client you would like to use its resources from and place it in the root of the repository. Proprietary Roblox assets are not included with RNR.

Finally, you may run `cmake --build .` in the path of the folder you've cloned the repository to so that you may configure and then finally build RNR.

# License
RNR-PLH is licensed under two separate licenses:
- All of RNR-PLH, with the sole exception of the engine, is re-licensed from upstream under the [GNU Affero General Public License v3.0](https://www.gnu.org/licenses/agpl-3.0.txt).
- The RNR engine itself is licensed under the [Creative Commons Zero v1.0 Universal](https://creativecommons.org/publicdomain/zero/1.0/legalcode.txt) license.

Copies of both licenses have been bundled with RNR-PLH.

RNR uses the [Luau](https://luau-lang.org/) language and code, developed by Roblox Corporation. Luau is copyright (c) 2019-2022 Roblox Corporation and copyright (c) 1994–2019 Lua.org, PUC-Rio.

RNR is not associated with, does not deal with, not approved by, not a subsidy of, or otherwise part of Roblox Corporation in any way, shape, or form.
