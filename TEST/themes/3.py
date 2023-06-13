import PySimpleGUI as sg

sg.theme('SystemDefaultForReal')

layout = [
    [sg.Text('Mi Interfaz Bonita', font=('Verdana', 14))],
    [sg.Checkbox('Opción 1'), sg.Checkbox('Opción 2')],
    [sg.Input()],
    [sg.Button('Guardar', button_color=('white', 'steelblue4'))]
]

window = sg.Window('Interfaz Bonita', layout)

while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break

window.close()
