#pragma once

#include <memory>
#include <array>
#include "dep/CImg.h"
#include "../../interfaces/i_drawable.h"

using Image = cimg_library::CImg<unsigned char>;
using ImagePtr = std::shared_ptr<Image>;

class ImageContext : public IDrawable {
public:
    ImageContext(int width, int height, const Color& background);
    virtual void draw_line(const Point& start, const Point& end) final;
    virtual void draw_ellipse(const Point& start, int rad) final;
    virtual void draw_text(const Point& left_top, const Point& right_bottom, const std::string& text) final;
    virtual void update() final;
private:
    void init_context(int width, int height, const Color& background);
    ImagePtr _image;

    static const int color_components = 3;
    static const int red_component = 0;
    static const int green_component = 1;
    static const int blue_component = 2;

    std::array<unsigned char, color_components> _color;
};