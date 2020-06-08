add_library(
        header SHARED
        functions.c
)

target_include_directories(header PUBLIC)