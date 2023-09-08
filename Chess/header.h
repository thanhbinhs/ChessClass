#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;

const int SCREEN_WIDTH = 1040;
const int SCREEN_HEIGHT = 690;
const float SCREEN_MARGIN = 50.0f;
static bool quit = false;

static const float cellSize = 80.0f;

static sf::Event event;
static sf::Font font;

#endif

