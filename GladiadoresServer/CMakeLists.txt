cmake_minimum_required(VERSION 3.13)
project(GladiadoresServer)
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


add_executable(GladiadoresServer main.cpp con_handler.cpp con_handler.h Server.cpp Server.h Torre.cpp Torre.h Simulacion.cpp Simulacion.h Utilities.cpp Utilities.h matriz.cpp matriz.h Gladiador.cpp Gladiador.h ListaTorres.cpp ListaTorres.h backtrack.cpp backtrack.h listanodo.cpp listanodo.h nodo_matriz.cpp nodo_matriz.h ListaGladiadores.cpp ListaGladiadores.h NodoGladiador.cpp NodoGladiador.h AlgoritmoGenetico.cpp AlgoritmoGenetico.h node.cpp node.h Lista.cpp Lista.h AStar.cpp AStar.h)

target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})

if(Boost_FOUND)

    target_link_libraries(GladiadoresServer ${Boost_LIBRARIES})
    target_link_libraries(GladiadoresServer ${CMAKE_THREAD_LIBS_INIT})
endif()