add_executable(fly-across main.cpp)
add_library(flyacross flyacross.cpp)

include_directories("${PROJECT_SOURCE_DIR}/flyacross")
target_link_libraries(fly-across ${EXTRA_LIBS})