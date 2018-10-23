cmake_minimum_required(VERSION 3.13)

# version
project(sdl-particle-explosion)
SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

set(SDL2_INCLUDE_DIRS "D:/github/dependencies/SDL/include" ${PROJECT_SOURCE_DIR}/include)
include_directories(${SDL2_INCLUDE_DIRS})

#set(SOURCE_FILES src/main.cpp src/Screen.cpp src/Particle.cpp src/Emitter.cpp)
#add_executable(sdl-particle-explosion ${SOURCE_FILES})
add_executable(sdl-particle-explosion src/main.cpp)

set(SDL2_LIBRARIES "SDL2main", "SDL2","opengl32")
target_link_libraries(sdl-particle-explosion ${SDL2_LIBRARIES})


#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

# SDL2_INCLUDE_DIR variable set by the FindSDL2 module (if it finds directory).
#set(SDL2_PATH "D:\\github\\dependencies\\SDL2-2.0.8")

#find_package(SDL2 REQUIRED)


#link_directories("D:\\github\\dependencies\\SDL2-2.0.8\\lib\\x64")
#target_link_libraries(${PROJECT_NAME} lSDL2main SDL2 opengl32)
#target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})


# To build on windows with MinGW from GIT shell
# cmake -G "MinGW Makefiles" -DCMAKE_SH="CMAKE_SH-NOTFOUND" ..

# To build from cms line
#g++ -g *.cpp -ID:\\github\\dependencies\\SDL2-2.0.8\\include -LD:\\github\\dependencies\\SDL2-2.0.8\\lib\\x64 -lSDL2main -lSDL2 -lopengl32 -o particle-explosion
#g++ -g src/*.cpp -I/d/github/particles-explosion/include -I/d/github/dependencies/SDL/include -L/d/github/dependencies/SDL/lib/win64 -lSDL2main -lSDL2 -lopengl32 -o particle-explosion