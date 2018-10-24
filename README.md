# Pixels Explosion

Just a simple C++ pixels explosion. Mostly based on SDL2 libraries.

## Getting Started

There is a compiled binary in the build folder. 

### Prerequisites

You'll need SDL2. I've compiled it for Windows and MacOS. I should work for Linux as well.

```
Give examples
```

### Installing

I've used g++, but there is also a cmake file which should allow to build with MinGW

```
g++ -g src/main.cpp src/Screen.cpp src/Emitter.cpp src/Particle.cpp -I/d/github/particles-explosion/include -I/d/github/dependencies/SDL/include -L/d/github/dependencies/SDL/lib/win64 -lSDL2main -lSDL2 -lopengl32 -o particle-explosion
```

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
