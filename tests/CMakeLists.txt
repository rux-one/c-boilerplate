add_executable(test_foo test_foo.c ../external/unity/src/unity.c)
target_link_libraries(test_foo foo)
target_include_directories(test_foo PRIVATE ../external/unity/src)

add_test(NAME TestFoo COMMAND test_foo)
