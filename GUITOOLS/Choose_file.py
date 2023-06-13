from tkinter import filedialog
from tkinter import *

def seleccionar_archivo():
    root = Tk()
    root.withdraw()
    root.attributes("-topmost", True)  # Set the window attributes to stay on top
    archivo = filedialog.askopenfilename(filetypes=(("Archivos apk", "*.apk"),))
    root.destroy()  # Destroy the window after selecting the file
    return archivo

