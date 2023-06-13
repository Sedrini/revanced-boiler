import PySimpleGUI as sg

# Configuración del tema y colores
sg.theme('LightBlue3')
sg.set_options(font=('Arial', 12))

# Definición del diseño de la interfaz
layout = [
    [sg.Text('Mi Interfaz Bonita', size=(20, 1), justification='center', font=('Helvetica', 20))],
    [sg.Text('Ingresa tu nombre:'), sg.Input(key='-NAME-')],
    [sg.Button('Saludar', size=(10, 2)), sg.Button('Limpiar', size=(10, 2))],
    [sg.Text('', size=(30, 2), key='-OUTPUT-', justification='center')],
]

# Creación de la ventana
window = sg.Window('Interfaz Bonita', layout, size=(400, 200))

# Bucle de eventos
while True:
    event, values = window.read()

    # Salir si se cierra la ventana
    if event == sg.WINDOW_CLOSED:
        break

    # Acciones según el evento
    if event == 'Saludar':
        name = values['-NAME-']
        if name:
            greeting = f'Hola, {name}!'
            window['-OUTPUT-'].update(greeting)
        else:
            window['-OUTPUT-'].update('Ingresa tu nombre primero.')

    if event == 'Limpiar':
        window['-NAME-'].update('')
        window['-OUTPUT-'].update('')

# Cierre de la ventana
window.close()
