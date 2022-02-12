project(homework4)
cmake_minimum_required(3.1)

include_directories("/usr/local/include")
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)