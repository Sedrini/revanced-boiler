import PySimpleGUI as sg

layout = [
    [sg.ProgressBar(100, orientation='h', size=(20, 20), key='progressbar')],
    [sg.Button('Iniciar')],
    [sg.Button('Cancelar')]
]

window = sg.Window('Programa con sg.ProgressBar', layout)

progress_bar = window['progressbar']

while True:
    event, values = window.read(timeout=100)

    if event in (sg.WINDOW_CLOSED, 'Cancelar'):
        break

    if event == 'Iniciar':
        for i in range(100):
            sg.popup_animated(sg.DEFAULT_BASE64_LOADING_GIF, time_between_frames=50)
            progress_bar.update_bar(i + 1)
        sg.popup_animated(None)

window.close()
