option(test "Build all tests." OFF) # makes boolean 'test' available

function(define_test TEST_NAME TEST_LOCATION)
    add_executable(test_${TEST_NAME} ${TEST_LOCATION})
    target_link_libraries(test_${TEST_NAME} gtest gtest_main ks3)
    add_test(NAME test_${TEST_NAME} COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_${TEST_NAME})
    message(${CMAKE_CURRENT_BINARY_DIR}/test_${TEST_NAME})
endfunction(define_test)

if (test)
    add_subdirectory(gui)
    add_subdirectory(sim)
endif(test)