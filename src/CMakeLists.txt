add_library(foo foo.c)
add_executable(my_program main.c)
target_link_libraries(my_program foo)
