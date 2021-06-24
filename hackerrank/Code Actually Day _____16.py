def permute(s, answer):
    if (len(s) == 0):
        print(answer, end = "\n")
        return
     
    for i in range(len(s)):
        ch = s[i]
        left = s[0:i]
        right = s[i + 1:]
        res = left + right
        permute(res, answer + ch)
 

answer = ""
 
s = input()
permute(s, answer)
