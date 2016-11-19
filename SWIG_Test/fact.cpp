//
//  fact.cpp
//  SWIG_Test
//
//  Created by constantin slioussarenko on 19/11/2016.
//  Copyright © 2016 constantin slioussarenko. All rights reserved.
//

#include "fact.hpp"

int fact(int n)
{
    int res =1;
    
    if(n>0)
    {
        for (int i=1; i<=n; i++) {
            res = res*i;
        }
    }
    
    return res;
}
