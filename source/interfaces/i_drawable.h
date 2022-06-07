#pragma once

#include <string>

struct Point {
    int x;
    int y;
};

struct Color {
    int red;
    int green;
    int blue;
};

class IDrawable {
public:
    virtual void draw_line(const Point& start, const Point& end) = 0;
    virtual void draw_ellipse(const Point& start, int rad) = 0;
    virtual void draw_text(const Point& left_top, const Point& right_bottom, const std::string& text) = 0;
    virtual void update() = 0;
};