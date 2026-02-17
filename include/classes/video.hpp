#pragma once

#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_sdl2.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <stdio.h>
#include <SDL2/SDL.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
# include <SDL2/SDL_opengles2.h>
#else
# include <SDL2/SDL_opengl.h>
#endif

#define TTT_WINDOW_TITLE	"TicTacToe"
#define TTT_WINDOW_WIDTH	200
#define TTT_WINDOW_HEIGH	250

const ImVec4	clear_color = ImVec4(0.67f, 0.83f, 0.02f, 1.00f);

class	Video {

private:

	SDL_Window* 	window;
	ImGuiIO 		io;
	SDL_GLContext 	gl_context;

	bool			initialized;
	bool			done;

public:

	Video(void);
	~Video(void);

	int		init(void);
	void	deinit(void);

	void	loop(void);
	void	treatEvents(void);
	void	draw(void);
	void	render(void);

	bool	openDemo(void);

};