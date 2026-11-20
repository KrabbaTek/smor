cmake_minimum_required(VERSION 3.15)
project(smor)

add_executable(smor
	src/main.c
)

target_include_directories(smor PRIVATE "include")