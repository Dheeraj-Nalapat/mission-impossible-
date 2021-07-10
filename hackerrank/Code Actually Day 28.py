from collections import Counter

inp_string = input()

def isValidStr( string):
    char_counter_dict = Counter( string)
    count_type_counter_dict = Counter(char_counter_dict.values())

    if len(count_type_counter_dict) == 1:
        return "WIN"
    elif len(count_type_counter_dict) > 2:
        return "LOSE"
    else:
        valid_freq = count_type_counter_dict.most_common()[0][0]

        deleted = 0

        for char,count in char_counter_dict.items():

            if count != valid_freq:

                if deleted == 0:
                    if count - 1 == valid_freq or count - 1 == 0:
                        deleted += 1

                    else:
                        return "LOSE"

                else:
                    return "LOSE"


        return "WIN"

print(isValidStr(inp_string))
