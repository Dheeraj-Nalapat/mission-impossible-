import keyboard
import time

members = ["dheeraj","michele","toby","krishnaprasadh"]
while True:
    if keyboard.is_pressed('x'):
        keyboard.send("Backspace")
        for i in range(4):
            keyboard.write(members[i])
            for j in range(i):
                keyboard.send("Down")    
            keyboard.send("Enter")
            time.sleep(0.05)
        break
