import keyboard
import time 
x=""
time.sleep(3)

for i in range(15):
     x=x+"."
     keyboard.write(x)
     keyboard.send('Enter')
     time.sleep(2)
     if keyboard.is_pressed('x'):
          break
