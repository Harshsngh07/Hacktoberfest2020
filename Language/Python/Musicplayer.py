#a program that helps a user create a music player GUI using Python and Tkinter

import os #importing the os module
from tkinter.filedialog import askdirectory #importing the askdirectory function from tkinter

import pygame #importing pygame to load and play music
from mutagen.id3 import ID3 #importing mutagen to get the metadata of the song and to display the title of the songs on screen
from tkinter import * #importing tkinter to make the GUI


win = Tk() #window creation
win.title("Sasta Spotify") #title for the window
win.geometry("300x350") #dimensions for the window
win.iconbitmap(r'C:\Users\deepa\Downloads\iconfinder_spotify_287525.ico') #giving the window an icon
list = [] #storing the songs of the folder in list format
realnames = [] #storing the real names of the song spresent in the tags

v = StringVar() #variable to store the song name
songlabel = Label(win,textvariable = v,width =60) #song label to display the song thats playing
songlabel.pack() #packing the label


index = 0 #initial song index
def updatelabel(): #function to update the name of the song that is being played
    global index
    #global songname
    v.set(realnames[index]) #setting the name of the song that is playing and will be displayed
    #return songname

def nextsong(): #method to play the nextsong
    global index
    index += 1
    pygame.mixer.music.load(list[index])
    pygame.mixer.music.play()
    updatelabel()

def previoussong(): #method to play the previous song
    global index
    index -= 1
    pygame.mixer.music.load(list[index])
    pygame.mixer.music.play()
    updatelabel()

def pausemusic(): #method to pause the song
    pygame.mixer.music.pause()

def resumemusic(): #method to resume the song
    pygame.mixer.music.unpause()

def directorychooser(): #method to choose the folder/directory from the device in which the songs are stored
    directory = askdirectory() #choosing the directory from which the song has to be chosen
    os.chdir(directory) #calling the folder using the os library
    for files in os.listdir(directory):
        if files.endswith(".mp3"): #checking if the file type  is .mp3
            path = os.path.realpath(files) #taking the path of the file(where it is stored)
            audio = ID3(path) #reading the path with mutagen
            realnames.append(audio.get('TIT2')) #appending the list with the names of the song(using the 'TIT2' to display the actual titles
            list.append(files) #adding songs to the list


    pygame.mixer.init() #calling the pygame library
    pygame.mixer.music.load(list[0]) #loading the first song of the list
    pygame.mixer.music.play() #playing the song


directorychooser() #calling the directorychooser method to choose the song folder


label = Label(win,text = 'Music player') #label for the heading
label.pack()

listbox = Listbox(win) #creating the list box to show the loaded songs
listbox.pack()
realnames.reverse()
for item in realnames:
    listbox.insert(0,item) #inserting the songs from the folder into the listbox

realnames.reverse()

#canvas = Canvas(win,width = 300,height = 300,bg = 'green')
#canvas.pack()

button_next = Button(win,text = 'Next Song',bg = 'black',fg = 'green',command = nextsong) #button to play the next song
button_next.pack()

button_previous = Button(win,text = 'Previous Song',bg = 'black',fg = 'green',command = previoussong) #button to play the previous song
button_previous.pack()

button_stop = Button(win,text = 'Pause Music',bg = 'black',fg = 'green',command = pausemusic) #button to pause the song
button_stop.pack()

button_resume = Button(win,text = 'Resume Music',bg = 'black',fg = 'green',command = resumemusic) #button to resume the song
button_resume.pack()

win.mainloop()