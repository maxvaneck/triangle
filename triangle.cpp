//
// Created by sages on 10/10/2018.
//

#include <stdexcept>
#include <iostream>
#include "triangle.h"

namespace triang{

    Triangle::Triangle() {

    }

    std::string Triangle::return_type(int angle_corner1,int angle_corner2, int angle_corner3,int lengtha,int lengthb, int lengthc){

        std::string types{};

        if ((angle_corner1+angle_corner2+angle_corner3) !=180) {
            std::cout<<angle_corner2;
            throw std::logic_error("This is not a triangle");
        }

        if (angle_corner1 ==90 or angle_corner2 == 90 or angle_corner3== 90){
            types = types + " right triangle";
        }

        if (lengtha==lengthb and lengthb==lengthc and lengtha==lengthc)
            types = types + " Equilateral triangle";

        if (angle_corner3 < 90 and angle_corner1 <90  and angle_corner2 <90) {
            types = types + " Acute Triangle";
        }

        if (angle_corner3 >90 or angle_corner1 > 90 or angle_corner2 >90) {
            types = types + " Obtuse triangle";
        }

        if(lengtha != lengthb and lengtha != lengthc and lengthb != lengthc){
            types = types + " Scalene triangle";
        }


        return types;
    };
}