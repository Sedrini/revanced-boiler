import PySimpleGUI as sg

sg.theme('LightGreen')

layout = [
    [sg.Text('Interfaz Bonita', font=('Helvetica', 18), text_color='navy')],
    [sg.Image('logo.png')],
    [sg.Text('Bienvenido', font=('Arial', 12))],
    [sg.Button('Aceptar', size=(10, 2), button_color=('white', 'green'))]
]

window = sg.Window('Interfaz Bonita', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break

window.close()
