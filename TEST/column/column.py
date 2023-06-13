import PySimpleGUI as sg

# Crear el diseño de la ventana
layout = [
    [sg.Text("Contenido de la ventana")],
    [sg.Column([[sg.Button("Botón")]], justification='left', pad=((0, 0), (20, 0)))]
]

# Crear la ventana
window = sg.Window('Ejemplo de Botón en la Esquina Inferior Izquierda', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break

window.close()
