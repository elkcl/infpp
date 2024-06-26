cmake_minimum_required(VERSION 3.14)
project(infpp)

set(CMAKE_CXX_STANDARD 20)
#add_compile_options(
#        -Werror
#
#        -Wall
#        -Wextra
#        -Wpedantic
#
#        -Wcast-align
#        -Wcast-qual
#        -Wconversion
#        -Wctor-dtor-privacy
#        -Wenum-compare
#        -Wfloat-equal
#        -Wnon-virtual-dtor
#        -Wold-style-cast
#        -Woverloaded-virtual
#        -Wredundant-decls
#        -Wsign-conversion
#        -Wsign-promo
#)

add_executable(vector_class memory/vector_class.cpp memory/vector_class.h memory/vector_test.cpp)
add_executable(n01 recursion/n01.cpp)
add_executable(n02 recursion/n02.cpp)
add_executable(n03 recursion/n03.cpp)
add_executable(n04 recursion/n04.cpp)
add_executable(n05 recursion/n05.cpp)
add_executable(n06 recursion/n06.cpp)
add_executable(n07 recursion/n07.cpp)
add_executable(n08 recursion/n08.cpp)

#Cxxdroid-binary: n07
add_executable(no_rec trees/no_rec.cpp)
add_executable(vector_tree trees/vector_tree.cpp)
add_executable(sorted_vector memory/sorted_vector.cpp)
add_executable(bin_search2 algo/bin_search2.cpp)
add_executable(sorted_point memory/sorted_point.cpp)
add_executable(sorted_point_any memory/sorted_point_any.cpp)


add_executable(mergesort algo/mergesort_test.cpp)
add_subdirectory(algo/mergesort)
target_link_libraries(mergesort MergeLib)

add_executable(quicksort algo/quicksort_test.cpp)
add_subdirectory(algo/quicksort)
target_link_libraries(quicksort QuickLib)

add_executable(template_vector memory/vector_test.cpp)
add_subdirectory(memory/template_vector)
target_link_libraries(template_vector TemplateVectorLib)
