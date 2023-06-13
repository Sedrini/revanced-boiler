import PySimpleGUI as sg

layout = [
    [sg.Text('Elige una opción:')],
    [sg.Radio('Opción 1', 'radio_group', default=True)],
    [sg.Radio('Opción 2', 'radio_group')],
    [sg.Button('Aceptar')]
]

window = sg.Window('Programa con sg.Radio', layout)

event, values = window.read()

if event == 'Aceptar':
    if values[0]:
        sg.popup('Seleccionaste la opción 1')
    elif values[1]:
        sg.popup('Seleccionaste la opción 2')

window.close()
