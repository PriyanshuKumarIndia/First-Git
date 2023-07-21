#Factorial of a number

n=int(input("Enter a number:"))
fac=1
for i in range(2,n+1):
    fac=fac*i
print("The foctorial is:",fac)