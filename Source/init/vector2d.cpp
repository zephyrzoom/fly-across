#include "vector2d.h"
int Vector2D::getX() {
    return m_x;
}

int Vector2D::getY() {
    return m_y;
}

void Vector2D::setX(int x) {
    m_x = x;
}

void Vector2D::setY(int y) {
    m_y = y;
}

Vector2D::Vector2D(int x, int y) {
    m_x = x;
    m_y = y;
}