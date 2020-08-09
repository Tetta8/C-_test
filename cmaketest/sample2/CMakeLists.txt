# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.14.5)

# プロジェクト名と使用する言語を設定
project(test_cmake CXX)

#hello.cppとgood_morning.cppをコンパイルして静的ライブラリlibgreetings.aを作成
add_library(greetings SHARED hello.cpp good_morning.cpp)

# sample.exeという実行ファイルをmain.cppとhello.cppから作成
add_executable(sample main.cpp)

# sample.exeを作成する際にlibgreetings.aをリンク
target_link_libraries(sample greetings)