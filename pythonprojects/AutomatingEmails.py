import keyboard
import time
import pandas as pd

df = pd.read_excel (r'\File name.xlsx')
print (df)

members = ["dheerajnalapat3@gmail.com","b20cs082@mace.ac.in","nalapatdheeraj@gmail.com"]
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
