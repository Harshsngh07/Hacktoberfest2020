#This program contains the code to conver an English word or sentence into any preffered language
#one can change the preffered language by changing the language ticker for eg - fr = french, en = englighh,etc.


import tkinter as tk  #used for creating our GUI
from googletrans import Translator #used for translating the word
#used for defining our GUI
win = tk.Tk() #creaating a window
win.title("Translator") #to set the title of the window that we want to create
win.geometry("200x70") #To set the height and width of the screen

def translator() :  #creating a function to translate the word input
    word = entry.get() #to get the input of word from the user
    translator1 =  Translator(service_urls=["translate.google.com"]) #translates the word from google
    translation1 = translator1.translate(word,dest= "fr") #converting the word to french
    label1 = tk.Label(win,text = f"Translated Word: {translation1.text}",bg="yellow")
    label1.grid(row=2,column=0)

label = tk.Label(win,text = "Write Here")    #a label used to display a text in the window
label.grid(row =0,column =0)     #adjusting the place where it will be placed

entry = tk.Entry(win)  #to define the block for the entry from the user
entry.grid(row=1,column=0) #grid coordinates for the entry

button = tk.Button(win,text = "Search",command = translator) #creating a button which help in searching
button.grid(row=1,column=1) #grid coordinates of the button




win.mainloop()