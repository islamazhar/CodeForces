if __name__ == "__main__":
    Map = {}
    siz = {}
    n = int(input())
    for i in range(n):
        str = input()
        MMap = {}
        for j in range(0,len(str)):
            t = ""
            for k in range(j,len(str)):
                t += str[k]
                MMap[t] = 1

        for x in MMap:
            if not x in Map:
                Map[x] = str
                siz[x] = 0
            siz[x] +=1    

    #for x in Map:
        #print(x,Map[x])
    q = int(input())
    for i in range(q):
        str = input()
        if str in Map:
            print(siz[str], Map[str])
        else:
            print("0 -")
