#include "c_image_context_png.h"

CImageContextPng::CImageContextPng(int width, int height, const Color &background, const std::filesystem::path &export_path) : CImageContextBase(width, height, background),
                                                                                                                               _export_path(export_path) {
}

void CImageContextPng::update() {
    _image->save_png(_export_path.c_str());
}
