cmake_minimum_required(VERSION 3.13)
project(GaldServer)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHREAD_FLAGS ON)
find_package(Threads)
find_package(Boost COMPONENTS system REQUIRED)

if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})
    set (Boost_USE_STATIC_LIBS ON)

endif()


<<<<<<< HEAD:GaldServer/CMakeLists.txt
add_executable(GaldServer main.cpp Gladiador.cpp Gladiador.h Utilities.cpp Utilities.h con_handler.cpp con_handler.h Server.cpp Server.h Simulacion.cpp Simulacion.h Torre.cpp Torre.h node.cpp node.h ListaTorres.cpp ListaTorres.h algoritmoGenetico.cpp algoritmoGenetico.h ListaGladiadores.cpp ListaGladiadores.h NodoGladiador.cpp NodoGladiador.h)
=======
add_executable(GaldServer main.cpp nodo_matriz.cpp nodo_matriz.h backtrack.cpp backtrack.h lista.cpp lista.h listanodo.cpp listanodo.h matriz.cpp matriz.h Gladiador.cpp Gladiador.h Utilities.cpp Utilities.h con_handler.cpp con_handler.h Server.cpp Server.h Simulacion.cpp Simulacion.h Torre.cpp Torre.h node.cpp node.h ListaTorres.cpp ListaTorres.h)
>>>>>>> master:GladServer/CMakeLists.txt
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})

if(Boost_FOUND)

    target_link_libraries(GaldServer ${Boost_LIBRARIES})
    target_link_libraries(GaldServer ${CMAKE_THREAD_LIBS_INIT})
endif()