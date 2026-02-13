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

class	Video {

private:

	SDL_Window* 	window;
	ImGuiIO* 		io;
	SDL_GLContext 	gl_context;

public:

	Video(void);
	~Video(void);

	int	init(void);

	const SDL_Window&		getWindow(void) const;
	const ImGuiIO&			getIo(void) const;
	const SDL_GLContext&	getGlContext(void) const;

};