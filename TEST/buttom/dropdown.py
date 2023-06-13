import PySimpleGUI as sg

def dropdown_action(option):
    if option == 'Opción 1':
        sg.popup('Se ha seleccionado la Opción 1')
    elif option == 'Opción 2':
        sg.popup('Se ha seleccionado la Opción 2')
    elif option == 'Opción 3':
        sg.popup('Se ha seleccionado la Opción 3')

# Opciones del drop-down
options = ['Opción 1', 'Opción 2', 'Opción 3']

# Crear el diseño de la ventana
layout = [
    [sg.Text('Selecciona una opción:')],
    [sg.DropDown(options, key='dropdown')],
    [sg.Button('Aceptar')]
]

# Crear la ventana
window = sg.Window('Ejemplo de Drop-Down', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break
    elif event == 'Aceptar':
        selected_option = values['dropdown']
        dropdown_action(selected_option)

window.close()
