# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/manu5535/Documents/Qt/Gladiadores/GaldServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GaldServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GaldServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GaldServer.dir/flags.make

CMakeFiles/GaldServer.dir/main.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GaldServer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/main.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/main.cpp

CMakeFiles/GaldServer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/main.cpp > CMakeFiles/GaldServer.dir/main.cpp.i

CMakeFiles/GaldServer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/main.cpp -o CMakeFiles/GaldServer.dir/main.cpp.s

CMakeFiles/GaldServer.dir/Gladiador.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/Gladiador.cpp.o: ../Gladiador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GaldServer.dir/Gladiador.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/Gladiador.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Gladiador.cpp

CMakeFiles/GaldServer.dir/Gladiador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/Gladiador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Gladiador.cpp > CMakeFiles/GaldServer.dir/Gladiador.cpp.i

CMakeFiles/GaldServer.dir/Gladiador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/Gladiador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Gladiador.cpp -o CMakeFiles/GaldServer.dir/Gladiador.cpp.s

CMakeFiles/GaldServer.dir/Utilities.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/Utilities.cpp.o: ../Utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GaldServer.dir/Utilities.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/Utilities.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Utilities.cpp

CMakeFiles/GaldServer.dir/Utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/Utilities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Utilities.cpp > CMakeFiles/GaldServer.dir/Utilities.cpp.i

CMakeFiles/GaldServer.dir/Utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/Utilities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Utilities.cpp -o CMakeFiles/GaldServer.dir/Utilities.cpp.s

CMakeFiles/GaldServer.dir/con_handler.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/con_handler.cpp.o: ../con_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GaldServer.dir/con_handler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/con_handler.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/con_handler.cpp

CMakeFiles/GaldServer.dir/con_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/con_handler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/con_handler.cpp > CMakeFiles/GaldServer.dir/con_handler.cpp.i

CMakeFiles/GaldServer.dir/con_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/con_handler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/con_handler.cpp -o CMakeFiles/GaldServer.dir/con_handler.cpp.s

CMakeFiles/GaldServer.dir/Server.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GaldServer.dir/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/Server.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Server.cpp

CMakeFiles/GaldServer.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Server.cpp > CMakeFiles/GaldServer.dir/Server.cpp.i

CMakeFiles/GaldServer.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Server.cpp -o CMakeFiles/GaldServer.dir/Server.cpp.s

CMakeFiles/GaldServer.dir/Simulacion.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/Simulacion.cpp.o: ../Simulacion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GaldServer.dir/Simulacion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/Simulacion.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Simulacion.cpp

CMakeFiles/GaldServer.dir/Simulacion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/Simulacion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Simulacion.cpp > CMakeFiles/GaldServer.dir/Simulacion.cpp.i

CMakeFiles/GaldServer.dir/Simulacion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/Simulacion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Simulacion.cpp -o CMakeFiles/GaldServer.dir/Simulacion.cpp.s

CMakeFiles/GaldServer.dir/Torre.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/Torre.cpp.o: ../Torre.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GaldServer.dir/Torre.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/Torre.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Torre.cpp

CMakeFiles/GaldServer.dir/Torre.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/Torre.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Torre.cpp > CMakeFiles/GaldServer.dir/Torre.cpp.i

CMakeFiles/GaldServer.dir/Torre.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/Torre.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/Torre.cpp -o CMakeFiles/GaldServer.dir/Torre.cpp.s

CMakeFiles/GaldServer.dir/node.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/node.cpp.o: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/GaldServer.dir/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/node.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/node.cpp

CMakeFiles/GaldServer.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/node.cpp > CMakeFiles/GaldServer.dir/node.cpp.i

CMakeFiles/GaldServer.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/node.cpp -o CMakeFiles/GaldServer.dir/node.cpp.s

CMakeFiles/GaldServer.dir/ListaTorres.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/ListaTorres.cpp.o: ../ListaTorres.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/GaldServer.dir/ListaTorres.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/ListaTorres.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaTorres.cpp

CMakeFiles/GaldServer.dir/ListaTorres.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/ListaTorres.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaTorres.cpp > CMakeFiles/GaldServer.dir/ListaTorres.cpp.i

CMakeFiles/GaldServer.dir/ListaTorres.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/ListaTorres.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaTorres.cpp -o CMakeFiles/GaldServer.dir/ListaTorres.cpp.s

CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o: ../algoritmoGenetico.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/algoritmoGenetico.cpp

CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/algoritmoGenetico.cpp > CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.i

CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/algoritmoGenetico.cpp -o CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.s

CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o: ../ListaGladiadores.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaGladiadores.cpp

CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaGladiadores.cpp > CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.i

CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/ListaGladiadores.cpp -o CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.s

CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o: CMakeFiles/GaldServer.dir/flags.make
CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o: ../NodoGladiador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o -c /home/manu5535/Documents/Qt/Gladiadores/GaldServer/NodoGladiador.cpp

CMakeFiles/GaldServer.dir/NodoGladiador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GaldServer.dir/NodoGladiador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manu5535/Documents/Qt/Gladiadores/GaldServer/NodoGladiador.cpp > CMakeFiles/GaldServer.dir/NodoGladiador.cpp.i

CMakeFiles/GaldServer.dir/NodoGladiador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GaldServer.dir/NodoGladiador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manu5535/Documents/Qt/Gladiadores/GaldServer/NodoGladiador.cpp -o CMakeFiles/GaldServer.dir/NodoGladiador.cpp.s

# Object files for target GaldServer
GaldServer_OBJECTS = \
"CMakeFiles/GaldServer.dir/main.cpp.o" \
"CMakeFiles/GaldServer.dir/Gladiador.cpp.o" \
"CMakeFiles/GaldServer.dir/Utilities.cpp.o" \
"CMakeFiles/GaldServer.dir/con_handler.cpp.o" \
"CMakeFiles/GaldServer.dir/Server.cpp.o" \
"CMakeFiles/GaldServer.dir/Simulacion.cpp.o" \
"CMakeFiles/GaldServer.dir/Torre.cpp.o" \
"CMakeFiles/GaldServer.dir/node.cpp.o" \
"CMakeFiles/GaldServer.dir/ListaTorres.cpp.o" \
"CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o" \
"CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o" \
"CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o"

# External object files for target GaldServer
GaldServer_EXTERNAL_OBJECTS =

GaldServer: CMakeFiles/GaldServer.dir/main.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/Gladiador.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/Utilities.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/con_handler.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/Server.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/Simulacion.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/Torre.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/node.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/ListaTorres.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/algoritmoGenetico.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/ListaGladiadores.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/NodoGladiador.cpp.o
GaldServer: CMakeFiles/GaldServer.dir/build.make
GaldServer: /usr/lib/x86_64-linux-gnu/libboost_system.so
GaldServer: /usr/lib/x86_64-linux-gnu/libboost_system.so
GaldServer: CMakeFiles/GaldServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable GaldServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GaldServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GaldServer.dir/build: GaldServer

.PHONY : CMakeFiles/GaldServer.dir/build

CMakeFiles/GaldServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GaldServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GaldServer.dir/clean

CMakeFiles/GaldServer.dir/depend:
	cd /home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/manu5535/Documents/Qt/Gladiadores/GaldServer /home/manu5535/Documents/Qt/Gladiadores/GaldServer /home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug /home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug /home/manu5535/Documents/Qt/Gladiadores/GaldServer/cmake-build-debug/CMakeFiles/GaldServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GaldServer.dir/depend

