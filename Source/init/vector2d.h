#pragma
class Vector2D {
private:
    int m_x;
    int m_y;
public:
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    Vector2D(int x, int y);
    Vector2D();
};