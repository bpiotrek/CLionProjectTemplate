cmake_minimum_required(VERSION 3.10)
project(gtestsproject_template)

set(CMAKE_CXX_STANDARD 17)

function(combine_source varName varHeader varSrc)
  file(RELATIVE_PATH
      varHeader ${CMAKE_CURRENT_SOURCE_DIR}
      ${PROJECT_SOURCE_DIR}/headers/${varHeader})
  file(RELATIVE_PATH
      varSrc ${CMAKE_CURRENT_SOURCE_DIR}
      ${PROJECT_SOURCE_DIR}/src/${varSrc})
  set(${varName} ${varHeader} ${varSrc})
  foreach (f ${ARGN})
    file(RELATIVE_PATH
        fi ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/src/${f})
    list(APPEND ${varName} ${fi})
  endforeach ()
  set(${varName} ${${varName}} PARENT_SCOPE)
endfunction()

include_directories(headers)

add_subdirectory(src)

add_subdirectory(tests)