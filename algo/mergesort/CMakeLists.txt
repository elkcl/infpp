project(MergeLib)
add_library(MergeLib mergesort.cpp mergesort.h)
target_include_directories(MergeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})