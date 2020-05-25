add_executable(thread_time ${CMAKE_CURRENT_SOURCE_DIR}/thread_time.cc)

target_link_libraries(thread_time LINK_PUBLIC timer)

install(TARGETS thread_time RUNTIME DESTINATION bin)