project(MergeLib)
add_library(MergeLib merge_sort.cpp merge_sort.h)
target_include_directories(MergeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})