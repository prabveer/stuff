from math import sqrt
def primecheck(numberToCheck, i):
    if(numberToCheck == 2):
        return True
    for i in range(2, int(sqrt((numberToCheck))+1)):
        if( numberToCheck % i == 0 ):
            return False
    return True

At100001stprime = False 
number = 2
primecount = 0
prime10001 = 0
while At100001stprime == False:
    if(primecheck(number, 2)):
         primecount += 1
    if(primecount == 10001):
        At100001stprime = True
        prime10001 = number
    number += 1
print("the 10001st prime is : " + str(prime10001))

