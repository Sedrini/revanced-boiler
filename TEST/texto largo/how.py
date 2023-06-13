import PySimpleGUI as sg

# Texto largo
long_text = "Este es un texto largo que se mostrará en varias líneas dentro de un sg.Text."

# Crear el diseño de la ventana
layout = [
    [sg.Text(long_text, size=(30, 5), auto_size_text=True)]
]

# Crear la ventana
window = sg.Window('Ejemplo de Texto Largo', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break

window.close()
