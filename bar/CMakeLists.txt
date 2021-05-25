cmake_minimum_required(VERSION 3.8)
project(bar)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(foo REQUIRED)

add_library(${PROJECT_NAME}
  src/bar.cpp
)
ament_target_dependencies(${PROJECT_NAME}
  foo
  # Uncommenting this line causes a deprecation warning
  # geometry_msgs
)

ament_package()
