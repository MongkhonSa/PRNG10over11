import math
import random
import numpy as np
import matplotlib.pyplot as plt
#import library
n=101 # size of array in x
x=np.arange(n)  #make array form 1-101
while(True): #loop
    print("1:C random") #menu1
    print("2:linear congruential generator") #menu2
    print("3:wichmann-hill generator") #menu3
    check = int(input(": SELECT HISTOGRAM GRAPH :")) #select menu to show histogram
    
    if(check ==1):  #if menu select is 1
        file ="randomlist1.txt" #figured file name 
        name_graph="C Random histogram"  #figured graph name 
    elif (check ==2):#if menu select is 2
        file ="randomlist2.txt" #figured file name 
        name_graph="linear congruential generator histogram" #figured graph name 
    elif (check ==3):#if menu select is 3
        file ="randomlist3.txt"#figured file name 
        name_graph="wichmann-hill generator histogram" #figured graph name 

    line = [line.rstrip('\n') for line in open(file)] #read data from file
    for i in range(0,100): #read loop line 0-100
        print(line[i])

    plt.bar(x,line, width=0.75) #config graph to show
    plt.title(name_graph) #figure title
    plt.xlabel("Value") #figure name x
    plt.ylabel("Frequency")#figure name Y
    plt.show() #show graph

 