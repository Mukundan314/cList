cmake_minimum_required(VERSION 3.5)
project(cList)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-Wall")
set(CMAKE_C_FLAGS_DEBUG "$(CMAKE_C_FLAGS) -g")
set(CMAKE_C_FLAGS_RELEASE "$(CMAKE_C_FLAGS)")

include_directories(include)

FILE(GLOB SOURCE_FILES src/*.c)
FILE(GLOB HEADER_FILES include/*.h)

#set(SOURCE_FILES ${SOURCE_FILES} ${HEADER_FILES})
add_library(list ${SOURCE_FILES})

install(TARGETS list DESTINATION lib)
install(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.h")
