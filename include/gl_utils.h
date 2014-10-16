#ifndef _GL_UTILS_H_
#define _GL_UTILS_H_

#include <GL/glew.h>
#include <GLFW/glfw3.h>

bool start_gl (int width, int height);
GLuint link_programme_from_files (const char* vs_file_name,
	const char* fs_file_name);
GLuint create_texture_from_file (const char* file_name);

bool parse_file_into_str (const char* file_name, char* shader_str);
unsigned int get_file_size (const char* file_name);

extern int gl_width;
extern int gl_height;
extern GLFWwindow* gl_window;

#endif
