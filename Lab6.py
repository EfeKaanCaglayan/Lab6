##import math
##def factorial(x):
 #   if(x>1):
#
  #      return x*factorial(x-1)
        
#    return 1

       
#step=lambda x,n:((-1)**n * (x**(2*n+1)))/factorial(2*n+1)  
    
#def sine_x(x_degrees,n):
 #   x=math.radians(x_degrees)
  #  result=0
   # for i in range(n):
    #    result+=step(x,i)
   # return result

#angle=float(input("x açısnı girin"))
#elnum=int(input(" terim sayısı"))
#print (f"sin{angle})≈{sine_x(angle,elnum)}")

count = 0

def func(n):
  
    global count
    
    if n == 1:
        count += 1 / n
    else:
        count += 1 / n
        func(n - 1)


n = 3
func(n)
print(count)
