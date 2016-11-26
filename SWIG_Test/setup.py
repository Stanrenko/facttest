# setup.py

from distutils.core import setup, Extension


fact_module = Extension('_fact', sources=['fact_wrap.cxx', 'fact.cpp'])

setup(name='fact', ext_modules=[fact_module], py_modules=["fact"])
