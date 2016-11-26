//
//  fact.i
//  SWIG_Test
//
//  Created by constantin slioussarenko on 20/11/2016.
//  Copyright © 2016 constantin slioussarenko. All rights reserved.
//

%module fact
%{
    /* Put header files here or function declarations like below */
    #define SWIG_FILE_WITH_INIT
    #include <stdio.h>
    extern int fact(int n);
    %}

extern int fact(int n);
