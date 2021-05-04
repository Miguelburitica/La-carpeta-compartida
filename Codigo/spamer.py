import pyautogui, time
time.sleep(5)

f = "Horror roto de mierda"
i = 0
while i <= 10000:
    for word in f:
        pyautogui.typewrite(word)
    pyautogui.press("enter")
    i += 1
