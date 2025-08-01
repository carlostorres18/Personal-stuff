import pyttsx3
import PyPDF2
from tkinter.filedialog import *

book = askopenfile()
pdfreader = PyPDF2.PdfReader(book)
pages = pdfreader.numPages

for num in range(0, pages):
    page = pdfreader.getPage(num)
    text = page.extractText()
    player = pyttsx3.init()
    player.say(text)
    player.runAndWait()