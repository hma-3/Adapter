#include <iostream>

using namespace std;

class Circle {
public:
    Circle() {}
    Circle(float radius) : radius_(radius) {}

    float getRadius() const { return radius_; }

private:
    float radius_;
};

class SquareCircleAdapter : public Circle {
public:
    SquareCircleAdapter(float side_length) : side_length_(side_length) {}

    float getRadius() const {
        return side_length_ / sqrt(2.0f);
    }

private:
    float side_length_;
};

int main() {
    SquareCircleAdapter adapter(10.0f);

    cout << "The radius of the adapted circle is " << adapter.getRadius() << endl;

    return 0;
}