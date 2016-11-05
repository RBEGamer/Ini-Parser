# Ini-Parser
This is a very simple and lightweight INI-File parser written in C/C++.
The compiled libary and the sourcecode can be found at /src/FRM_INI_PARSER_LIB/.

If you want to build the libary for an other OS a CMake-File is included at /src/FRM_INI_PARSER_LIB/CMakeLists.txt

# INCLUDE LIBARY
Just include the header with `#include "ini_parser.hpp"` located at /src/FRM_INI_PARSER_LIB/ini_parser.hpp
and link the libary libFRM_INI_PARSER.a located at /src/FRM_INI_PARSER_LIB/Build/Products/Debug/libFRM_INI_PARSER.a.

# USAGE SOURCECODE
Copy the source files :
* /src/FRM_INI_PARSER_LIB/ini_parser.hpp
* /src/FRM_INI_PARSER_LIB/ini_parser.cpp
To your working direcotry and include the ini_parser.hpp.

# DEFINES
* if you are using Windows line termination charakters `\r\n` please define _WIN32,_WIN64,__WIN__ or FRM_WIN
* if you want to use the std::map for faster access please define INI_PARSER_USE_STD_MAP otherwise a standard array will used

# SAMPLE CODE
A sample project of using this INI-Parser can be found at /src/FRM_INI_PARSER_TEST/.

> `#include "frm_ini_parser.hpp"`

> `#include <iostream>`

> `#include <string>`

> `void test(){`

>    `FRM::ini_parser* parser = new FRM::ini_parser();`

>    `parser->load_ini_file("./config.ini");`

>    `std::string* test =parser->get_value("window", "window_title");`

>    `std::string* test1 =parser->get_value("directories", "asset_dir");`

>    `delete  parser;`

>    `parser = nullptr;`

> `}`

