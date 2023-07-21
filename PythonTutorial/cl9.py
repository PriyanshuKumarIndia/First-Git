import time

Ts=time.strftime("%H:%M:%S")
print("Current time is ",Ts)
ts=int(time.strftime("%H"))
if ts>=12 and ts<18:
    print("Good afternoon sir")
elif ts>17:
    print("Good evening sir")
elif ts>20:
    print("Good night sir")
else:
    print("Good morning sir")