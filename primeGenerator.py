#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Mar 25 06:56:16 2022

@author: GOKSU
"""
# Have the generator keep a list of the primes it's generated. 
# A candidate number x is prime if (x % p) != 0 for
# all earlier primes p.

def generatePrimes():
    p, primes = 3, [2]
    yield 2
    while True:
        for i in primes:
            if p % i == 0:
                break
        else:
            primes.append(p)
            yield p
        p += 2
        
        