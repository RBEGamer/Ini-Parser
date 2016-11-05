cmake_minimum_required(VERSION 2.7)
project(FRM_INI_PARSER_LIB)
ADD_LIBRARY( lib_ini_parser STATIC ini_parser.cpp)

TARGET_LINK_LIBRARIES( lib_ini_parser )
