
project(xxx)

set(HEDEAR_FILES XXX.h)
set(SOURCE_FILES XXX.cpp)

add_library(libxxx STATIC ${SOURCE_FILES} ../memorychunk/MemoryChunk.cpp ../memorychunk/MemoryChunk.h)
target_include_directories(libxxx PUBLIC .)

add_executable(xxx ${SOURCE_FILES} main.cpp)

target_link_libraries(xxx libxxx)

