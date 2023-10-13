#Importing

import pyautogui

#Taking user Input
inputString = pyautogui.prompt()

convertedString = int(inputString)
gString="" 


#Writing phase
pyautogui.write(inputString)
for i in range(convertedString,0,-1):
    pyautogui.write("\n")
    for j in range((convertedString+1)-i):
        gString+="#"
    pyautogui.write(gString)  #Will give output where the cursor is
    gString=""

