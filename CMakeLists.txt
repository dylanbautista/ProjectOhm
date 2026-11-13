
cmake_minimum_required(VERSION 3.21)

project(Ohm
    VERSION 0.1.0
    DESCRIPTION "Ohm software"
    LANGUAGES CXX
)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Qt dependencies
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Qt configuration
qt_standard_project_setup()

# Application executable
qt_add_executable(Ohm
    src/main.cpp
)

# Link dependencies
target_link_libraries(Ohm
    PRIVATE
        Qt6::Widgets
)
