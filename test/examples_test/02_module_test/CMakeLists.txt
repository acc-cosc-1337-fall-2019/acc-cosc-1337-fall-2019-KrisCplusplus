add_executable(ex_02_tests "02_module_tests.cpp")
target_link_libraries(ex_02_tests ex_02_01_library ex_02_02_library ex_02_03_library)
add_test(NAME ex_02_tests COMMAND ex_02_tests -s)