def gridlandMetro(n, m, k, track):
    # Write your code here
    d={}
    for i in range(k):
        if track[i][0] in d:
            d[track[i][0]].append((track[i][1],track[i][2]))
        else:
            d[track[i][0]]=[(track[i][1],track[i][2])]
    s=0
    for key in d:
        intervals=d[key]
        intervals.sort()
        s+=intervals[0][1]-intervals[0][0]+1
        i=1
        while i<len(intervals):
            if intervals[i][0]>=intervals[i-1][0] and intervals[i][1]<=intervals[i-1][1]:
                intervals[i],intervals[i-1]=intervals[i-1],intervals[i]
                i+=1
                continue
            if intervals[i][0]<=intervals[i-1][1] and intervals[i][1]>=intervals[i-1][1]:
                s+=intervals[i][1]-intervals[i-1][1]
            else:
                s+=intervals[i][1]-intervals[i][0]+1
            i+=1
    return m*n-s
