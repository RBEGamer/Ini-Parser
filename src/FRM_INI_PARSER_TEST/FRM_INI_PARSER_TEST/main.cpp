//
//  main.cpp
//  FRM_INI_PARSER_TEST
//
//  Created by Marcel Ochsendorf on 05.11.16.
//  Copyright © 2016 Marcel Ochsendorf. All rights reserved.
//

/*
 TO RUN THIS TEST CREATE A config.ini file with this content in your buid dir:
 
 ;Window resolution settings
 [window]
 window_title=WINDOW_NAME
 ;file parsing settings
 [directories]
 asset_dir=Assets
 
 */



#include <stdio.h>
#include <iostream>
#include <string>
#include "frm_ini_parser.hpp"
int ini_parser_unit_test(int argc, const char * argv[]) {
    
    FRM::ini_parser* parser = new FRN::ini_parser();
    parser->load_ini_file("./config.ini");
    
    std::string* test =parser->get_value("window", "window_title");
    std::string* test1 =parser->get_value("directories", "asset_dir");
    
    delete  parser;
    parser = nullptr;
    //CHECK RESULT
    if(*test != "WINDOW_NAME" || *test1 != "Assets"){
        return  -1;
    }
    
    return 0;
}
