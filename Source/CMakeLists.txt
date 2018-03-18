add_subdirectory(flyacross)
add_subdirectory(game)
add_subdirectory(mainloop)
add_subdirectory(debugging)
add_subdirectory(eventmanager)
add_subdirectory(gamelogic)
add_subdirectory(luamanager)
add_subdirectory(rescache)
add_subdirectory(utils)

add_library(flyacross flyacross/flyacross.cpp game/game.cpp gamelogic/gamelogic.cpp 
            eventmanager/eventmanager.cpp game/gameoption.cpp mainloop/initializer.cpp 
            debugging/logger.cpp luamanager/luamanager.cpp utils/vector2d.cpp rescache/rescache.cpp)

add_executable(fly-across flyacross/main.cpp)
target_link_libraries(fly-across flyacross)

