
if __name__=="__main__":
    t = 0 
    for i in range(10000000):
        cnt = 0
        num = i 
        #print(i)
        while num>0:
            cnt += num%10
            num /=10
        if cnt == 10:
            t+=1 
    print(t)