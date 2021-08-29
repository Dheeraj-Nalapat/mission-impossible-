nums = {
    0: "ZERO",  
    1: "ONE",
    2: "TWO",
    3: "THREE",
    4: "FOUR",
    5: "FIVE",
    6: "SIX",
    7: "SEVEN",
    8: "EIGHT",
    9: "NINE",
    10: "TEN",
    11: "ELEVEN",
    12: "TWELVE",
    13: "THIRTEEN",
    14: "FOURTEEN",
    15: "FIVETEEN",
    16: "SIXTEEN",
    17: "SEVENTEEN",
    18: "EIGHTEEN",
    19: "NINETEEN",
    20: "TWENTY",
    30: "THIRTY",
    40: "FORTY",
    50: "FIFTY",
    60: 'SIXTY',
    70: 'SEVENTY',
    80: 'EIGHTY',
    90: "NINETY",
    100: '100'
}

for i in range(int(input())):
    a,b = [int(i) for i in input().split()]
    c = a+b
    if(c<=20):
        print(nums[c])
    else:
        k = f"{nums[(c//10)*10]}" + (f"-{nums[c%10]}" if c%10 > 0 else "")
        print(k)
