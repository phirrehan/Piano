cmake_minimum_required(VERSION 3.16)
project(Piano LANGUAGES CXX)

# Tell CMake where to look for SFML (THIS replaces installing!)
set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/external/SFML")


find_package(SFML COMPONENTS Graphics Window System Audio REQUIRED)

add_executable(Piano src/main.cpp)

add_custom_command(TARGET Piano POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "${CMAKE_SOURCE_DIR}/assets/Sounds"
    "$<TARGET_FILE_DIR:Piano>/Sounds"
)

target_link_libraries(Piano PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
    SFML::Audio
)
