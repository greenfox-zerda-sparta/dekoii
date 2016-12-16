#include <iostream>
#include "SDL2/SDL.h"
#include "draw.h"

using namespace std;

void drawMaze(SDL_Renderer* renderer, int x, int y, int xNull, int yNull) {
  if (x > 18) {
    draw d;
    d.MoveTo(xNull , yNull + 10);
    d.DrawBy(renderer,  x - 10);
    d.TurnBy(90);
    d.DrawBy(renderer,  y - 20);
    d.TurnBy(90);
    d.DrawBy(renderer,  x - 20);
    d.TurnBy(90);
    d.DrawBy(renderer,  y - 30);
    SDL_SetRenderDrawColor(renderer, 180, 0, 0, 0);
    
    drawMaze (renderer,x - 20 , y - 20, xNull +10, yNull +10);
    
  } else {
    return;
  }
    
    SDL_SetRenderDrawColor(renderer, 180 + 10, 0 + 10, 0 + 10, 0);
}

void drawHex (SDL_Renderer* renderer,bool isInMiddle, int lineLength, draw c) {
  if (!isInMiddle) {
    isInMiddle = true;
  c.MoveTo (300, 300);
  } 
  
  if ( (c.getX ()> 0 && c.getX () < 600 ) || (c.getY () > 0 && c.getY () < 600)) {
    c.DrawBy(renderer, lineLength += 4);
    c.TurnBy (60);
    c.DrawBy (renderer, lineLength += 4);
    c.TurnBy (60);
    c.DrawBy (renderer, lineLength += 4);
    c.TurnBy (60);
    c.DrawBy (renderer, lineLength += 4);
    c.TurnBy (60);
    c.DrawBy (renderer, lineLength += 4);
    c.TurnBy (60);
    c.DrawBy (renderer, lineLength += 4);
    c.TurnBy (60);

    drawHex (renderer, isInMiddle, lineLength, c);
  } else {
    return;
  }
}
    

int main(int argc, char ** argv) {
  bool quit = false;
  SDL_Event event;

  SDL_Init(SDL_INIT_EVERYTHING); 

  SDL_Window* window = SDL_CreateWindow("SDL2 Fractal",
  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, 0);

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  int x = 0;
  while ( x < 100) {

    SDL_WaitEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    }

    SDL_SetRenderDrawColor(renderer, 180, 255, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    
    draw c;
    drawMaze(renderer, 600, 600, 0, 0);
    drawHex (renderer, false, 2, c);
    SDL_RenderPresent(renderer);
    x++;
  }
  
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
