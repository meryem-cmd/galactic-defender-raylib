/*#pragma once
#include <raylib.h>

class Laser {
public:
    Laser(Vector2 position, int speed);
    void Update();
    void Draw();
    Rectangle getRect();
    bool active;
private:
    Vector2 position;
    int speed;
}; */


#include "raylib.h"

class Laser {
public:
    Laser(Vector2 position, int speed);
    void Draw();
    Rectangle getRect();
    void Update();
    bool IsActive() { return active; }
    bool active;

private:
    Vector2 position;
    int speed;
    
};
