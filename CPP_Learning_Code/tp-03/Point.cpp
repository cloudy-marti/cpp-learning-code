struct AbsolutePoint {
  double x = 0.0, y = 0.0;
};

AbsolutePoint default_origin;

class RelativePoint {
  const AbsolutePoint& _origin;
  AbsolutePoint        _shift;
  
public:
  RelativePoint() :
    _origin {default_origin},
    _shift  {default_origin}
  {}

  RelativePoint(const AbsolutePoint shift, const AbsolutePoint& origin = default_origin) :
    _origin { origin },
    _shift { shift }
  {}

  double get_x() const { return _origin.x + _shift.x; }
  double get_y() const { return _origin.y + _shift.y; }
};

#include<vector>

int main()
{
    std::vector<RelativePoint> truc = std::vector<RelativePoint>(3);
    std::vector<AbsolutePoint> machin = std::vector<AbsolutePoint>(3);


    return 0;
}