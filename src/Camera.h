/*
 * Camera.h
 *
 *  Created on: 22 Dec 2016
 *      Author: nch15
 */

#ifndef SRC_CAMERA_H_
#define SRC_CAMERA_H_
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <math.h>

#include "GameAsset.h"

class Camera : public GameAsset {
public:
	Camera();
	virtual ~Camera();
	glm::mat4 getViewMatrix();

private:
	glm::mat4 viewMatrix;
};

#endif /* SRC_CAMERA_H_ */
