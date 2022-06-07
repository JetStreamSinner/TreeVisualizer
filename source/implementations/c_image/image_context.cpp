#include "image_context.h"

using namespace cimg_library;

ImageContext::ImageContext(int width, int height, const Color& background) {
    init_context(width, height, background);
}

void ImageContext::draw_line(const Point& start, const Point& end) {
    _image->draw_line(start.x, start.y, end.x, end.y, _color.data());
}

void ImageContext::draw_ellipse(const Point& start, int rad) {
    _image->draw_ellipse(start.x, start.y, rad, rad, 0, _color.data());
}

void ImageContext::draw_text(const Point& left_top, const Point& right_bottom, const std::string& text) {
    _image->draw_text(left_top.x, left_top.y, text.c_str(), _color.data());
}

void ImageContext::update() {
    _image->display("Test");
}

void ImageContext::init_context(int width, int height, const Color& background) {
    const int default_size_t = 1;
    const int default_size_c = 3;

    _image = std::make_shared<Image>(width, height, default_size_t, default_size_c);
    _image->fill(0);

    _color.at(red_component) = background.red;
    _color.at(green_component) = background.green;
    _color.at(blue_component) = background.blue;
}
