//
//  main.cpp
//  SWIG_Test
//
//  Created by constantin slioussarenko on 19/11/2016.
//  Copyright © 2016 constantin slioussarenko. All rights reserved.
//

#include <iostream>
#include "fact.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int res;
    res = fact(3);
    std::cout << res << std::endl;
    return 0;
}
