project(flush)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(flush_SRCS flush.cpp main.cpp)
qt4_automoc(${flush_SRCS})
add_executable(flush ${flush_SRCS})
target_link_libraries(flush ${QT_QTCORE_LIBRARY})
