add_library(antilag STATIC
    src/antilag.c
)

target_include_directories(antilag
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
