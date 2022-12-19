#include "lak/basic_program.inl"

lak::optional<int> LAK_BASIC_PROGRAM(window_preinit)(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return lak::nullopt;
}

void LAK_BASIC_PROGRAM(window_init)(lak::window &window)
{
	(void)window;
}

void LAK_BASIC_PROGRAM(window_handle_event)(lak::window &window,
                                            lak::event &event)
{
	(void)window;
	(void)event;
}

void LAK_BASIC_PROGRAM(window_loop)(lak::window &window,
                                    uint64_t counter_delta)
{
	(void)window;
	(void)counter_delta;
}

int LAK_BASIC_PROGRAM(window_quit)(lak::window &window)
{
	(void)window;
	return 0;
}
