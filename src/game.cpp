#include "RenderWindow.h"
#include "SDL3/SDL.h"
#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_log.h>
#include <SDL3/SDL_video.h>
int main() {
  if (!SDL_InitSubSystem(SDL_InitFlags::SDL_INIT_VIDEO))
    SDL_LogCritical(SDL_LogCategory::SDL_LOG_CATEGORY_ERROR, SDL_GetError());
  auto window = SDL_CreateWindow("Game", 1024, 568, SDL_WINDOW_RESIZABLE);
  if (!window) {
    SDL_LogCritical(SDL_LogCategory::SDL_LOG_CATEGORY_ERROR, SDL_GetError());
  }
  bool game_is_running = true;
  while (game_is_running) {
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
      if (event.type == SDL_EventType::SDL_EVENT_QUIT)
        game_is_running = false;
    }
  }
  SDL_DestroyWindow(window);
  SDL_QuitSubSystem(SDL_InitFlags::SDL_INIT_VIDEO);
  return 0;
}
