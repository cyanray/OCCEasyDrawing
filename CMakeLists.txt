cmake_minimum_required(VERSION 3.21)
project(OCCEasyDrawing)
set(CMAKE_CXX_STANDARD 20)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

find_package(OpenCASCADE CONFIG REQUIRED PATHS ${OpenCASCADE_DIR})
find_package(Eigen3 CONFIG REQUIRED)

set(SOURCES 
	"include/Common/Common.hpp"
	"include/Common/ShapeRenderStyle.hpp"
	"include/EasyDrawing/EasyDrawing.hpp"
	"src/EasyDrawing.cpp")

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC ${OpenCASCADE_LIBRARIES})
target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen)
install(DIRECTORY "${OpenCASCADE_BINARY_DIR}$<$<CONFIG:Debug>:d>$<$<CONFIG:Release>:i>/" TYPE BIN)
