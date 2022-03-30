#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Feb 22 23:27:45 2022

@author: GOKSU
"""
def fib (x):
    """
    Assumes x is int >= 0
    returns fibonacci of x

    """
    if x == 0 or x == 1:
        return 1
    else:
        return fib(x-1) + fib(x-2)