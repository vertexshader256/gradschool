// glPoint.cpp: implementation of the glPoint class.
//
//////////////////////////////////////////////////////////////////////

#include "glPoint.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

glPoint::glPoint()
{
	x = y = z = 0.0f;
}

glPoint::glPoint(float x1, float y1, float z1)
{
	x = x1;
	y = y1;
	z = z1;
}

glPoint::~glPoint()
{

}