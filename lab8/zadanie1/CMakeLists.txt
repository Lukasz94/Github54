
project(zadanie1)

set(SOURCE_FILES main.cpp)

add_library(libzadanie1 STATIC ${SOURCE_FILES} zadanie2/pesel.cpp zadanie2/pesel.h ../pesel/pesel.cpp ../pesel/pesel.h ../pesel/main.cpp)
target_include_directories(libzadanie1 PUBLIC .)

add_executable(zadanie1 ${SOURCE_FILES} main.cpp)

target_link_libraries(zadanie1 libzadanie1)

