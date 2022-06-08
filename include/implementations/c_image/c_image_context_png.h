#pragma once

#include <filesystem>
#include "c_image_context_base.h"

class CImageContextPng : public CImageContextBase {
public:
    explicit CImageContextPng(int width, int height, const Color& background, const std::filesystem::path& export_path);
    void update() final;
private:
    std::filesystem::path _export_path;
};
