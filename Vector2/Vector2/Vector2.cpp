#include "Vector2.h"
#include <cmath>

template<class T>
inline jk::Vector2<T>& jk::Vector2<T>::Normalise()
{
	float M = Magnitude();

	x /= M;
	y /= M;

	return *this;
}

template<class T>
float jk::Vector2<T>::Magnitude()
{
	return sqrtf(pow(x, 2) + pow(y, 2));
}
