#ifndef PATHSMOOTHER_H
#define PATHSMOOTHER_H

#include <vector>
#include <vex.h>
#include <cmath>
#include <deque>
#include "structs/path-struct.h"

inline Segment CalcCoefficients(double alpha, double tension, std::vector<double> p0, 
  std::vector<double> p1, std::vector<double> p2, std::vector<double> p3);

inline Path GenerateSmoothPath(Path path);

#endif