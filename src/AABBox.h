#ifndef AABBOX_H
#define AABBOX_H

#include "GameAsset.h"
#include "Math.h"
#include <memory>
#include <utility>
#include <ostream>

using namespace std;

enum AXIS {X, Y, Z};

class AABBox {

public:
  AABBox(const Vector3, const float, const float, const float);
  virtual ~AABBox();
  void SetCentre(Vector3 &);

  bool CollidesWith(const shared_ptr<AABBox>);

private:

  shared_ptr<Vector3> centre, extent_x, extent_y, extent_z;

  pair<float,float> projectOntoAxis(const AABBox &, enum AXIS);

  
  friend ostream& operator<<(ostream &, const AABBox &);
};

#endif
