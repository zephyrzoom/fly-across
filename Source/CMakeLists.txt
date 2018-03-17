add_subdirectory(flyacross)
add_subdirectory(game)
add_subdirectory(init)

add_library(flyacross flyacross/flyacross.cpp game/game.cpp game/gamelogic.cpp init/eventmanager.cpp init/gameoption.cpp init/initializer.cpp init/logger.cpp init/luamanager.cpp init/vector2d.cpp init/rescache.cpp)

add_executable(fly-across flyacross/main.cpp)
target_link_libraries(fly-across flyacross)

