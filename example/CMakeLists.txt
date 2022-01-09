add_executable(test test.cpp)

target_link_libraries(test ${LIBRARY_NAME})

# install(
#   TARGETS test
#   # EXPORT ${PROJECT_EXPORT} # uncomment in order to export target
#   RUNTIME DESTINATION bin
#   COMPONENT "${INSTALL_BIN_DIR}"
# )

