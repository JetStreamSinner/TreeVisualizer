#include "c_image_context_base.h"

using namespace cimg_library;

const int color_components = 3;
std::array<unsigned, color_components> make_arr_from_color(const Color& color) {
    return {static_cast<unsigned>(color.red), static_cast<unsigned>(color.green), static_cast<unsigned>(color.blue)};
}

CImageContextBase::CImageContextBase(int width, int height, const Color& background) {
    init_context(width, height, background);
}

void CImageContextBase::draw_line(const Point& start, const Point& end, const Color& color) {
    const auto color_tuple = make_arr_from_color(color);
    _image->draw_line(start.x, start.y, end.x, end.y, color_tuple.data());
}

void CImageContextBase::draw_ellipse(const Point& start, int rad, const Color& color) {
    const auto color_tuple = make_arr_from_color(color);
    _image->draw_ellipse(start.x, start.y, rad, rad, 0, color_tuple.data());
}

void CImageContextBase::draw_text(const Point& left_top, const Point& right_bottom, const std::string& text, const Color& color) {
    const auto color_tuple = make_arr_from_color(color);
    _image->draw_text(left_top.x, left_top.y, text.c_str(), color_tuple.data());
}

void CImageContextBase::init_context(int width, int height, const Color& background) {
    const int default_size_t = 1;
    const int default_size_c = 3;

    _image = std::make_shared<Image>(width, height, default_size_t, default_size_c);
    _image->fill(background.red, background.green, background.blue);
}
