#include <iostream>
#include <cmath>

using namespace std;

int main() {

	class Point {
		private: 
			double _x;
			double _y;

		public:
			Point(double initialX=0.0, double initialY = 0.0) : _x(initialX), _y(initialY) {}

			double getX() const {return _x;}
			void setX(double val) {_x = val;}
			double getY() const {return _y;}
			void setY(double val) {_y = val;}

			void scale(double factor) {
				_x *= factor;
				_y *= factor;
			}

			double distance(Point other) const {
				double dx = _x - other._x;
				double dy = _y - other._y;
				return sqrt(dx * dx + dy * dy);
			}

			void normalize() {
				double mag = distance( Point());	//measure distance to origin
				if (mag > 0)
					scale(1/mag);
			}

			Point operator+(Point other) const {
				return Point(_x + other._x, _y + other._y);
			}

			Point operator*(double factor) const {
				return Point(_x * factor, _y * factor);
			}

			double operator*(Point other) const {
				return _x * other._x + _y * other._y;
			}
	};
}
