import pyautogui as spam
import time

limit = input("Enter no. of messages\n")
msg = input("Message you want to send\n")

i = 0

while i<int(limit):
    spam.typewrite(msg)
    spam.press('Enter')

i+=1
