# facttest

The goal of this project is to dig into the creation of Python modules from C++ using SWIG.

The first example of factorial works :

1) Wrote the C++ code :
fac.hpp
fac.cpp

2) Wrote the SWIG interface file :
fac.i

3) Wrote the setup.py file which allows to build the module
setup.py

4) Ran the below command lines 
$ swig -c++ -python fact.i 
--> creates the fact_wrap.cxx wrapper and the fact.py python wrapper
$ python setup.py build_ext --inplace
--> builds all the object code files

5) Now in python :
$ python
Python 3.5.1 |Anaconda 4.0.0 (x86_64)| (default, Dec  7 2015, 11:24:55) 
[GCC 4.2.1 (Apple Inc. build 5577)] on darwin
Type "help", "copyright", "credits" or "license" for more information.
>>> import fact
>>> fact.fact(5)
120

Useful thread : http://stackoverflow.com/questions/33868056/swig-wrapping-c-to-python-is-using-default-python-rather-than-anaconda-python/33914982

Next steps should be :
1) Understanding how to export different kind of objects through SWIG
2) Try and automate the creation of the interface file
