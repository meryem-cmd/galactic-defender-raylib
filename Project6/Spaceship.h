/*#pragma once
#include <raylib.h>
#include "laser.h"
#include <vector>

class Spaceship {
public:
    Spaceship();
    ~Spaceship();
    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLaser();
    Rectangle getRect();
    void Reset();
    std::vector<Laser> lasers;

private:
    Texture2D image;
    Vector2 position;
    double lastFireTime;
    Sound laserSound;
}; */



#include "Laser.h"
#include "raylib.h"
#include <vector>

class Spaceship {
public:
    Spaceship();
    ~Spaceship();
    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLaser();
    Rectangle getRect();
    void Reset();

    std::vector<Laser> lasers;

    bool visible;

    void undraww();

private:
    Vector2 position;
    Texture2D image;
    Sound laserSound;
    float lastFireTime;
};
