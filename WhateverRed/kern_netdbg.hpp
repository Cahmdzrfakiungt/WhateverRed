//
//  kern_netdbg.hpp
//  WhateverRed
//
//  Created by Nyan Cat on 7/27/22.
//  Copyright © 2022 VisualDevelopment. All rights reserved.
//

#ifndef kern_netdbg_hpp
#define kern_netdbg_hpp

class NETDBG
{
public:
    static bool sendData(const char* fmt, ...);
};

#endif /* kern_netdbg_hpp */
