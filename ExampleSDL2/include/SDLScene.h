/// \brief Manages SDL scene and main game loop
/// \author Josh Bailey
/// \version 1.0
/// \date 23/11/21 Project setup
/// Revision History:
///
/// \todo

#ifndef SDL_SCENE_H_
#define SDL_SCENE_H_

#include <SDL2/SDL.h>

#include "KeyboardManager.h"

#include <vector>

class SDLScene
{
    public:
        SDLScene();

        bool Initialise();
        void GameLoop();
        void Close();

    private:
        SDL_Window* m_window = NULL;
        SDL_Renderer* m_renderer = NULL;
        KeyboardManager m_keyboard;

        const int m_SCREEN_SIZE = 512;

        bool m_pause = false;
};

#endif // _SDL_SCENE_H_