cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(my_robot_interface REQUIRED)

add_executable(talker src/talker.cpp)
add_executable(station src/station.cpp)
add_executable(phone src/phone.cpp)
add_executable(number_publisher src/number_publisher.cpp)
add_executable(number_counter src/number_counter.cpp)
add_executable(add_two_ints_server src/add_two_ints_server.cpp)
add_executable(add_two_ints_client src/add_two_ints_client.cpp)
add_executable(hardware_status_publisher src/hardware_status_publisher.cpp)

ament_target_dependencies(talker rclcpp)
ament_target_dependencies(phone rclcpp example_interfaces)
ament_target_dependencies(station rclcpp example_interfaces)
ament_target_dependencies(number_publisher rclcpp example_interfaces)
ament_target_dependencies(number_counter rclcpp example_interfaces)
ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)
ament_target_dependencies(add_two_ints_client rclcpp example_interfaces)
ament_target_dependencies(hardware_status_publisher rclcpp my_robot_interface)

install(
  TARGETS talker
          station
          hardware_status_publisher
          number_publisher
          number_counter
          phone
          add_two_ints_server
          add_two_ints_client
  DESTINATION lib/${PROJECT_NAME})

ament_package()
