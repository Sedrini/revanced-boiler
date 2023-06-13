import PySimpleGUI as sg

layout = [
    [sg.Text('Elige una o varias opciones:')],
    [sg.Listbox(['Opción 1', 'Opción 2', 'Opción 3'], size=(20, 3), select_mode=sg.LISTBOX_SELECT_MODE_MULTIPLE)],
    [sg.Button('Aceptar')]
]

window = sg.Window('Programa con sg.Listbox', layout)

event, values = window.read()

if event == 'Aceptar':
    selected_options = values[0]
    sg.popup(f'Seleccionaste: {", ".join(selected_options)}')

window.close()
