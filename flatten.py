#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 19:59:27 2022

@author: GOKSU
"""


def flatten(aList, flat = None):
    if flat == None:
        flat = []
    else:
        flat = flat
    
    for i in aList:
        if not isinstance(i, list):
            flat.append(i)
        else:
            flatten(i, flat)
    return flat
            
            
            

            
            

print(flatten([[1,'a',['cat'],2],[[3]],'dog',4,5, [2, "abc"]]))