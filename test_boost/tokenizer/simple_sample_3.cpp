/**
* @file   simple_sample_3.cpp
* @author wanguanglu(wanguanglu@qq.com)
* @date   2016/05/04 00:46:28
* @brief 
*  
**/

#include <boost/tokenizer.hpp>
#include <string>
#include <iostream>

#include <logging.h>

int main(){

    glorey::log::init_log("log", "test");
    
    std::string s = "12252001";
    int offsets[] = {2,2,4};

    boost::offset_separator f(offsets, offsets+3);
    boost::tokenizer<boost::offset_separator> tok(s,f);
    
    NOTICE_LOG << "start simple sample 3"; 
    for (boost::tokenizer<boost::offset_separator>::iterator beg=tok.begin(); beg!=tok.end();++beg) {
        NOTICE_LOG << *beg ;
    }
}