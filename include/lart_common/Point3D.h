//
// Created by carlostojal on 30-10-2023.
//

#ifndef LART_COMMON_POINT3D_H
#define LART_COMMON_POINT3D_H

#include <lart_common/Point.h>

namespace lart_common {

    class Point3D : Point {

        protected:
            /*! \brief Z axis value. */
            float z;

            /*! \brief Was the Z value set? */
            bool zSet = false;

        public:
            Point3D();

            /*! \brief Initialize a 3D point.
             *
             * @param x X value
             * @param y Y value
             * @param z Z value
             */
            Point3D(const float& x, const float& y, const float& z);

            /*! \brief Extend a 2D point to 3D.
             *
             * @param point2 2D point definition
             * @param z Z value
             */
            Point3D(const Point& point2, const float& z);


            /*! \brief Z value getter
             *
             * @return Z value
             */
            float getZ() const;

            /*! \bfief Z value setter
             *
             * @param z New Z value
             */
            void setZ(const float& z);

    };
}

#endif //LART_COMMON_POINT3D_H
