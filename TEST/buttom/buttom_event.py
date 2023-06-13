import PySimpleGUI as sg

# Crear el diseño de la ventana
layout = [
    [sg.Button("Botón 1", key='button1'), sg.Button("Botón 2", key='button2')]
]

# Crear la ventana
window = sg.Window('Ejemplo de Botones con Acciones', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break
    elif event == 'button1':
        print("¡Se ha pulsado el botón 1!")
    elif event == 'button2':
        print("¡Se ha pulsado el botón 2!")

window.close()
