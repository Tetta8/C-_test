# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.14.5)

# プロジェクト名と使用する言語を設定
project(test_cmake CXX)

# sample.exeという実行ファイルをmain.cppとhello.cppから作成
add_executable(sample main.cpp hello.cpp)