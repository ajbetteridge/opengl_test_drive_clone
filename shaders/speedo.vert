#version 420

layout (location=0) in vec3 vp;
layout (location=1) in vec2 vt;

uniform mat4 P, V, M;

out vec2 st;

void main () {
	st = vt;
	gl_Position = P * V * M * vec4 (vp, 1.0);
}
