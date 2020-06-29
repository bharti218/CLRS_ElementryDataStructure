# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 08:04:17 2020

@author: DeLL
"""
import math
def MaxCrossSubarray(A, low, mid, high):
    left_sum = -math.inf
    sum = 0
    left_max = 0
    for i in range(mid, low-1, -1):
        sum = sum+A[i]
        if(sum>left_sum):
            left_sum = sum
            left_max = i
    right_sum = -math.inf
    sum = 0
    right_max = 0
    for i in range(mid+1, high, 1):
        sum = sum+A[i]
        if(sum>right_sum):
            right_sum = sum
            right_max = i
    return (left_max, right_max, left_sum+right_sum)
            
        
def FindMaximumSubarray(A,low,high):
    if (high == low):
        return (low, high, A[high])
    else:
        mid = (high+low)//2
        left_low, left_high, left_sum = FindMaximumSubarray(A,low,mid)
        right_low, right_high, right_sum = FindMaximumSubarray(A,mid+1,high)
        cross_low,cross_high,cross_sum = MaxCrossSubarray(A,low, mid, high)
        if left_sum>right_sum and left_sum>cross_sum:
            return (left_low, left_high,left_sum)
        elif right_sum>left_sum and right_sum>cross_sum:
            return (right_low, right_high, right_sum)
        else:
            return (cross_low, cross_high, cross_sum)
    
A = [-5,-4,-3,-4]
a, b, c = FindMaximumSubarray(A,0,3)
print("a ",a, "b ",b, "c ",c )

#FindMaximumSubarray({1,2,3}, 1,2)