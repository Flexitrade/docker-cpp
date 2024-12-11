file (GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${PROJECT_SOURCE_DIR}/src/*.hpp
    ${PROJECT_SOURCE_DIR}/src/*.cpp 
)

add_executable(DockerCpp ${SRC_FILES})
# target_link_libraries(DockerCpp)