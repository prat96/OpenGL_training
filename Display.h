#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL/SDL.h>
#include <string>

class Display
{
public:
	Display(int width, int height, const std::string& title);

	virtual ~Display();

protected:

private:
	Display(const Display& other) {}
	Display& operator=(const Display& other) {}
	
	SDL_Window* m_window;
};

#endif //DISPLAY_H
