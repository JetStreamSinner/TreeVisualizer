#pragma once

#include <string>

struct Point {
    int x;
    int y;
    explicit Point(int x, int y) : x(x), y(y) {

    }
};

struct Color {
    int red;
    int green;
    int blue;
};

class IDrawable {
public:
    virtual int width() const = 0;
    virtual int height() const = 0;
    virtual void draw_line(const Point& start, const Point& end, const Color& color) = 0;
    virtual void draw_ellipse(const Point& start, int rad, const Color& color) = 0;
    virtual void draw_text(const Point& point, const std::string& text, const Color& color) = 0;
    virtual void update() = 0;
};