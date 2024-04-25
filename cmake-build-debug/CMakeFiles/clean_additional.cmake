# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Nonogram_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Nonogram_autogen.dir/ParseCache.txt"
  "Nonogram_autogen"
  )
endif()
