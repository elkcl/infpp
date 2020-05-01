file(REMOVE_RECURSE
  "libMergeLib.a"
  "libMergeLib.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MergeLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
