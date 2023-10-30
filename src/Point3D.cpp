//
// Created by carlostojal on 30-10-2023.
//
#include <lart_common/Point3D.h>

namespace lart_common {

    Point3D::Point3D() {

    }

    Point3D::Point3D(const float& x, const float& y, const float& z) {
        this->setX(x);
        this->setY(y);
        this->setZ(z);
    }

    Point3D::Point3D(const Point& point2, const float& z) {
        this->setX(point2.getX());
        this->setY(point2.getY());
        this->setZ(z);
    }

    float Point3D::getZ() const {
        if(!this->zSet) {
            throw std::runtime_error("Z value was not set for 3D point!");
        }
        return this->z;
    }

    void Point3D::setZ(const float &z) {
        this->z = z;
        this->zSet = true;
    }
}