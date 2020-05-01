project(QuickLib)
add_library(QuickLib quicksort.inl quicksort.h)
set_target_properties(QuickLib PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(QuickLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})