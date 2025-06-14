# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Ez-Autumn_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Ez-Autumn_autogen.dir\\ParseCache.txt"
  "Ez-Autumn_autogen"
  )
endif()
