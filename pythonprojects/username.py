def valid_username(username):
    if len(username) < 6:
        return False
    return True

username = input("Enter your username: ")
while not valid_username(username):
    print("Username is too short")
    username = input("Enter your username: ")