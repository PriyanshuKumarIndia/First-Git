def cw(S):
    words=S.split()
    count=0
    for w in words:
        if int(len(w))==1:
            count+=1
        elif w==w[::-1]:
            count+=1
    return count

S=str(input())
print(cw(S))