# Pixels Explosion

![alt text](https://im4.ezgif.com/tmp/ezgif-4-741b4424e2d7.gif)

Just a simple C++ pixels explosion. Mostly based on SDL2 libraries.

## Getting Started

There is a compiled binary in the build folder. 

### Prerequisites

You'll need SDL2. I've compiled it for Windows and MacOS. I should work for Linux as well.

### Installing

I've used g++, but there is also a cmake file which should allow to build with MinGW

```
g++ -g src/main.cpp src/Screen.cpp src/Emitter.cpp src/Particle.cpp -I/d/github/particles-explosion/include -I/d/github/dependencies/SDL/include -L/d/github/dependencies/SDL/lib/win64 -lSDL2main -lSDL2 -lopengl32 -o particle-explosion
```
## Author

* **Diego Trazzi** - *Initial work* - [d1Ng0](https://github.com/d1Ng0)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* [Caveofprogramming](https://caveofprogramming.com/)
