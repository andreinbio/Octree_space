#include "../utils/utils.hpp"

#define GLFW_INCLUDE_ES3
#include "../../libs/GLFW/include/glfw3.h"


class Main: public utils {

public:
void run();
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
};

