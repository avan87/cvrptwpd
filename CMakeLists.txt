cmake_minimum_required(VERSION 3.5)
project(cvrptwpd)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp matr.cpp  utils.cpp CVRPSolver.cpp CVRPSolver_server.skeleton.cpp cvrptwpd_constants.cpp cvrptwpd_types.cpp)

include_directories(/home/metis/Desktop/ortools/or-tools.Linux64/include)
include_directories(/home/metis/Downloads/or-tools-2016-04/src)


link_directories(/usr/local/lib)
link_directories(/home/metis/Desktop/ortools/or-tools.Linux64/lib)


add_executable(cvrptwpd ${SOURCE_FILES})

target_link_libraries(cvrptwpd ortools thrift thriftnb event )