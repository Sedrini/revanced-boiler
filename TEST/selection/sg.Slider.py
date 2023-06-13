import PySimpleGUI as sg

layout = [
    [sg.Text('Selecciona un valor:')],
    [sg.Slider(range=(1, 10), orientation='h', default_value=5)],
    [sg.Button('Aceptar')]
]

window = sg.Window('Programa con sg.Slider', layout)

event, values = window.read()

if event == 'Aceptar':
    selected_value = values[0]
    sg.popup(f'Seleccionaste el valor: {selected_value}')

window.close()
