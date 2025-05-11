cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(talker src/talker.cpp)
add_executable(station src/station.cpp)
add_executable(phone src/phone.cpp)
add_executable(number_publisher src/number_publisher.cpp)
add_executable(number_counter src/number_counter.cpp)
ament_target_dependencies(talker rclcpp)
ament_target_dependencies(phone rclcpp example_interfaces)
ament_target_dependencies(station rclcpp example_interfaces)
ament_target_dependencies(number_publisher rclcpp example_interfaces)
ament_target_dependencies(number_counter rclcpp example_interfaces)

install(TARGETS
  talker
  station
  number_publisher
  number_counter
  phone
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
