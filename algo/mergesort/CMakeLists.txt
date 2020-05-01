project(MergeLib)
add_library(MergeLib mergesort.inl mergesort.h)
set_target_properties(MergeLib PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(MergeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})