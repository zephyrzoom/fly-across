int main()
{
    check_os();
    check_cpu();
    init_random();
    load_debug();
    init_cache();
    create_window();
    init_audio();
    load_config();
    draw();
    game_init();
}
