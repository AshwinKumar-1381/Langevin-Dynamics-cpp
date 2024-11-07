// particles.cpp

#include "library.h"
#include "particles.h"

using namespace program;

program::Atoms2D::Atoms2D()
{
    rx=0.0, ry=0.0;
    r2x=0.0, r2y=0.0;
    px=0.0, py=0.0;
    p2x=0.0, p2y=0.0;
    fx=0.0, fy=0.0;
    jumpx=0, jumpy=0;
    m=1.0; 
    D=1.0;
    Pe=1.0; 
    id='A';
}

program::Atoms2D::~Atoms2D(){}