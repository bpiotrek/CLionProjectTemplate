cmake_minimum_required(VERSION 3.16)

add_executable(App
  main.cxx
)

target_Link_Libraries(App LibMain Lib)
