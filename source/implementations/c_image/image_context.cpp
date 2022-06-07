#include "image_context.h"

using namespace cimg_library;

ImageContext::ImageContext() {
    init_context();
}

void ImageContext::draw_line(const Point& start, const Point& end) {
    unsigned char color[] = {static_cast<unsigned char>(_default_color.red),
                             static_cast<unsigned char>(_default_color.green),
                             static_cast<unsigned char>(_default_color.blue) };
    _image->draw_line(start.x, start.y, end.x, end.y, color);
}

void ImageContext::draw_ellipse(const Point& start, int rad) {
    unsigned char color[] = {static_cast<unsigned char>(_default_color.red),
                             static_cast<unsigned char>(_default_color.green),
                             static_cast<unsigned char>(_default_color.blue) };
    _image->draw_ellipse(start.x, start.y, rad, rad, 0, color);
}

void ImageContext::draw_text(const Point& left_top, const Point& right_bottom, const std::string& text) {
    unsigned char color[] = {static_cast<unsigned char>(_default_color.red),
                             static_cast<unsigned char>(_default_color.green),
                             static_cast<unsigned char>(_default_color.blue) };
    _image->draw_text(left_top.x, left_top.y, text.c_str(), color);
}

void ImageContext::update() {
    _image->display("Test");
}

void ImageContext::init_context() {
    const int default_width = 640;
    const int default_height = 400;
    const int default_size_t = 1;
    const int default_size_c = 3;

    _image = std::make_shared<Image>(default_width, default_height, default_size_t, default_size_c);
    _image->fill(0);
    _default_color = {125, 125, 125};
}
