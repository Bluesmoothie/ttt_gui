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

const ImVec4	clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

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