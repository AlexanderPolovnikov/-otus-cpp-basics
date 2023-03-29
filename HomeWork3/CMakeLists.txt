cmake_minimum_required(VERSION 3.5)

project(guess_the_number)

set(HEADERS
    userscore.h
    config.h
    constants.h
    utils.h)

set(SOURCES
    main.cpp
    config.cpp
    utils.cpp)

add_executable(guess_the_number ${HEADERS} ${SOURCES})

set_target_properties(guess_the_number
    PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)
