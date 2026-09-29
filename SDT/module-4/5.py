import pyautogui
import time

n = int(input("Enter a number: "))

time.sleep(2)

for i in range(1, n + 1):
    pyautogui.write("#" * i)
    pyautogui.press("enter")
