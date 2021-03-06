/*
 * Camera.cc
 *
 *  Created on: 22 Dec 2016
 *      Author: nch15
 */

#include "Camera.h"

//create a 4x4 view matrix made up of vec4, return it through teh getViewMatrix function

Camera::Camera() {
	viewMatrix = glm::mat4(
	             glm::vec4(1.0, 0.0, 0.0, 0.0),
	             glm::vec4(0.0, 1.0, 0.0, 0.0),
	             glm::vec4(0.0, 0.0, 1.0, 0.0),
	             glm::vec4(0.0, 0.0, 0.0, 1.0)
	);

}

Camera::~Camera() {
	// TODO Auto-generated destructor stub
}
glm::mat4 Camera::getViewMatrix(){
	return viewMatrix;
}

