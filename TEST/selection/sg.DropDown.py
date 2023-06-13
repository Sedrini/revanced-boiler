import PySimpleGUI as sg

# Definir los valores para el menú desplegable
options = ['Opción 1', 'Opción 2', 'Opción 3']

# Crear el diseño de la ventana
layout = [
    [sg.Text('Selecciona una opción:')],
    [sg.DropDown(values=options, default_value='Opción 1', size=(20, 1), key='dropdown')],
    [sg.Button('Aceptar')]
]

# Crear la ventana
window = sg.Window('Ejemplo de DropDown', layout)

while True:
    event, values = window.read()

    if event == sg.WINDOW_CLOSED:
        break
    elif event == 'Aceptar':
        selected_option = values['dropdown']
        sg.popup(f'Opción seleccionada: {selected_option}')

window.close()
