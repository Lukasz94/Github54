
project(serializable)

set(HEDEAR_FILES Serialization.h)
set(SOURCE_FILES Serialization.cpp)

add_library(libserializable STATIC ${SOURCE_FILES})
target_include_directories(libserializable PUBLIC .)

add_executable(serializable ${SOURCE_FILES} main.cpp)

target_link_libraries(serializable libserializable)

