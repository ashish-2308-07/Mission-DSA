def minimumLoss(price):
    p_dict ={}
    p_len=len(price)
    for i in range(p_len):
        p_dict[price[i]]=i
    price.sort()
    min_diff=price[1]-price[0]
    if p_len ==2:
        return min_diff
    for i in range(2,p_len):
        
        if price[i]-price[i-1]<min_diff \
            and p_dict[price[i]]< \
            p_dict[price[i-1]]:
            min_diff = price[i]-price[i-1]
    return min_diff
