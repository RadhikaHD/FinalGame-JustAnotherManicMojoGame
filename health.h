#include "vector2f.h"
#include "ioManager.h"
#include "aaline.h"

class Health {
public:
  Health();
  Health(const std::string& name);
  Health(int sx, int sy, int tl, int cl, 
         float t, int inc, Uint32 c, float sp);
  Health(const Health&);
  void draw() const;
  void update(Uint32);
  void reset() { currentLength = totalLength; }  
  void decrementlife();
  void increment();
  void incrementlife();
  
   bool isEmpty() const {
  	return currentLength == 0;
  }
  bool isFull() const {
  	return (totalLength == currentLength);
  } 

private:
  SDL_Surface* screen;
  Vector2f start;
  int totalLength;
  int currentLength;
  int thick;
  int increments;
  float interval;
  int deltaTime;
  const Uint32 RED;
  const Uint32 GRAY;
  const Uint32 BLACK;
  const Uint32 color;
  void drawBox() const;
  Health& operator=(const Health&);
};
