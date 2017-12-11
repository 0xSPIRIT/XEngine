#define GLEW_STATIC

#include <glew.h>
#include "../engine/gameLoop/GameLoop.h"

static void update_callback(float dt);
static void render_callback();

int main() {
	xen::Window window(900, 600, "title");

	xen::GameLoop game(window);

	game.run(update_callback, render_callback);

	return EXIT_SUCCESS;
}

static void update_callback(float dt) {

}

static void render_callback() {
	glClear(GL_COLOR_BUFFER_BIT);
}