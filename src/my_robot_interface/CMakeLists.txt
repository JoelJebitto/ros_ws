cmake_minimum_required(VERSION 3.8)
project(my_robot_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED) # If you're using std_msgs in the msg file

find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME} "msg/HardwareStatus.msg"
                           "srv/ComputeRectangleArea.srv")
ament_export_dependencies(rosidl_default_runtime)

ament_package()
