import PySimpleGUI as sg

sg.theme('DarkTeal2')

layout = [
    [sg.Text('Ejemplo de interfaz bonita', font=('Arial', 16), text_color='white')],
    [sg.Button('Botón 1', button_color=('white', 'green')), sg.Button('Botón 2', button_color=('white', 'blue'))],
    [sg.Text('Ingresa tu nombre:'), sg.Input()],
    [sg.Button('Enviar', size=(10, 2), button_color=('white', 'purple'))]
]

window = sg.Window('Interfaz Bonita', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break

window.close()
