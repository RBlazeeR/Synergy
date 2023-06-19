add_executable (dz1 "main.cpp" "inout.h" "inout/print.cpp" "inout/read.cpp")
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET dz1 PROPERTY CXX_STANDARD 20)
endif()