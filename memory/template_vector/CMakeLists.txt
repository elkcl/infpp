project(TemplateVectorLib)
add_library(TemplateVectorLib template_vector.h template_vector.inl)
set_target_properties(TemplateVectorLib PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(TemplateVectorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(TemplateVectorLib MergeLib)
target_link_libraries(TemplateVectorLib QuickLib)