a=int(input("Enter the percentage "))
if(a>100):
    print("Itni percentage aati h kabhi soch ke dekh.")
if(a>=90 and a<100):
    print("A grade")
elif(a>=80 and a<90 ):
    print("B grade")
elif(a>=70 and a<80 ):
    print("C grade")
elif(a>=60 and a<70 ):
    print("D grade")
elif(a>=50 and a<60 ):
    print("E grade")
else:
    print("Lagta h fail hogya")