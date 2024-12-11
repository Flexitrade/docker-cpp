find_package(GTest CONFIG REQUIRED)
# GTest include code would
# go somewhere in here

# GLOB_RECURSE also simplifies your glob expressions
file (GLOB_RECURSE TEST_SRC_FILES CONFIGURE_DEPENDS
    ${PROJECT_SOURCE_DIR}/tests/*.hpp
    ${PROJECT_SOURCE_DIR}/tests/*.cpp 
)

add_executable(DockerCppTests ${TEST_SRC_FILES})
target_link_libraries(DockerCppTests PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

add_test(SimpleTest DockerCppTests)
