project(QuickLib)
add_library(QuickLib quicksort.cpp quicksort.h)
target_include_directories(QuickLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})