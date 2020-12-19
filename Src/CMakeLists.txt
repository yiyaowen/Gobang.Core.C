include_directories(
    Core.Main
    Core.Random
)

file(GLOB_RECURSE CoreSourceFiles . "*.c")

add_library(core SHARED
    ${CoreSourceFiles}
)
