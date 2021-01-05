include_directories(
    Core.Main
    Core.Random
    Core.RenjuGroup
    Core.Utility
)

file(GLOB_RECURSE CoreSourceFiles "*.c")
file(GLOB_RECURSE CoreHeaderFiles "*.h")

add_library(core SHARED
    ${CoreSourceFiles}
    ${CoreHeaderFiles}
)
