#include "Data.hpp"

Data::Data() : _x(0), _y(0), _z(0)
{

}

Data::Data(int x, int y, int z) : _x(x), _y(y), _z(z)
{

}

Data::Data(const Data &src)
{
	this->_x = src._x;
	this->_y = src._y;
	this->_z = src._z;
}

Data::~Data()
{

}

Data	&Data::operator=(const Data &src)
{
	Data(src);
	return *this;
}
