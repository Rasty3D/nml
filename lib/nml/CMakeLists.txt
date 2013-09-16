# Include directories
include_directories(include)

# Add library
add_library(nml
  src/nml.cpp)

# Add test
add_executable(test_nml
  test/test_nml.cpp)
target_link_libraries(test_nml
  nml)
add_test(NML
  ${EXECUTABLE_OUTPUT_PATH}/test_nml)

# Install
install(TARGETS nml
  ARCHIVE DESTINATION ${ROOT_DIR}/install/lib)
install(FILES include/nml.h
  DESTINATION ${ROOT_DIR}/install/include)
install(TARGETS test_nml
  RUNTIME DESTINATION ${ROOT_DIR}/install/tests)