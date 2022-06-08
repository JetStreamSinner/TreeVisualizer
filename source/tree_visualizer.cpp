#include <tree_visualizer.h>

TreeVisualizer::TreeVisualizer(std::shared_ptr<IDrawable> &context) : _draw_context(context) {

}

void TreeVisualizer::render(ITreeNode * root, const Color& body_color, const Color& text_color) {
    const int start_width = _draw_context->width() / 2;
    const int start_height = 30;

    draw_node(root, start_width, start_height, body_color, text_color);
    _draw_context->update();
}

void TreeVisualizer::draw_node(ITreeNode * node, int x, int y, const Color& body_color, const Color& text_color) {
    const Point current_point(x, y);
    _draw_context->draw_ellipse(current_point, 20, body_color);

    const int text_offset_x = 5;
    const int text_offset_y = 5;
    const Point text_point(x - text_offset_x, y - text_offset_y);
    _draw_context->draw_text(text_point, std::to_string(node->value()), text_color);

    if (node->left()) {
        const int left_point_offset_x = 100;
        const int left_point_offset_y = 50;

        const Point next_left_point(current_point.x - left_point_offset_x, current_point.y + left_point_offset_y);
        _draw_context->draw_line(current_point, next_left_point, body_color);
        draw_node(node->left(), next_left_point.x, next_left_point.y, body_color, text_color);
    }
    if (node->right()) {
        const int right_point_offset_x = 100;
        const int right_point_offset_y = 50;

        const Point next_right_point(current_point.x + right_point_offset_x, current_point.y + right_point_offset_y);
        _draw_context->draw_line(current_point, next_right_point, body_color);
        draw_node(node->right(), next_right_point.x, next_right_point.y, body_color, text_color);
    }
}
