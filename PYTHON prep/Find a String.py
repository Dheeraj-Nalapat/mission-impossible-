def count_substring(string, sub_string):
    i=0
    j=0
    count=0
    while(i<len(string)):
        if(string[i]==sub_string[j]):
            j+=1
            if(j==len(sub_string)):
                count+=1
                j=0
                i-=len(sub_string)-1
        elif(j>0):
            i-=j
            j=0        
        else:
            j=0
        i+=1    
            
                                
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
