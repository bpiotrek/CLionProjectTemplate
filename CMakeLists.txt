cmake_minimum_required(VERSION 3.10)
project(gtestsproject_template)

set(CMAKE_CXX_STANDARD 17)

function(combine_source varLibName varHeader varSrc)
  file(RELATIVE_PATH
      varHeader ${CMAKE_CURRENT_SOURCE_DIR}
      ${PROJECT_SOURCE_DIR}/headers/${varHeader})
  file(RELATIVE_PATH
      varSrc ${CMAKE_CURRENT_SOURCE_DIR}
      ${PROJECT_SOURCE_DIR}/src/${varSrc})
  set(varFiles ${varHeader} ${varSrc})
  foreach (f ${ARGN})
    file(RELATIVE_PATH
        fi ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/src/${f})
    list(APPEND varFiles ${fi})
  endforeach ()
  add_library(${varLibName} STATIC ${varFiles})
endfunction()

include_directories(headers)

add_subdirectory(src)

add_subdirectory(tests)
