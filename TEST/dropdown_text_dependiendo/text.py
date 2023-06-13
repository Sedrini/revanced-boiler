import PySimpleGUI as sg

def update_layout(window, selected_option, selected_option2):

    
    if selected_option == '':
        window['-CHECKBOX-'].update(visible=False)
        window['-blabla-'].update(visible=False)
    elif selected_option == 'Option 1' and selected_option2 == 'Espejo':
        window['-CHECKBOX-'].update(visible=True)
        window['-blabla-'].update(visible=True)
    elif selected_option in ['Option 2', 'Option 3']:
        window['-CHECKBOX-'].update(visible=True)
        window['-blabla-'].update(visible=True)
    else:
        window['-CHECKBOX-'].update(visible=False)
        window['-blabla-'].update(visible=False)

# Define el diseño de la ventana
hide_ads = sg.Checkbox('Hide-ads', key='-blabla-', visible=False)
layout = [
    [sg.Text('Selecciona una opción:'),sg.Button("test", key='pop')],
    [sg.DropDown(['', 'Option 1', 'Option 2', 'Option 3'], key='-DROPDOWN-', enable_events=True)],
    [sg.DropDown(['', 'numero', 'letra', 'Espejo'], key='-DROPDOWN2-', enable_events=True)],
    [sg.Checkbox('CheckBox', key='-CHECKBOX-', visible=False)],
    [hide_ads]
]

# Crea la ventana
window = sg.Window('Ejemplo de DropDown', layout)

# Bucle de eventos
while True:
    event, values = window.read()
    if event == sg.WINDOW_CLOSED:
        break
    elif event in ('-DROPDOWN-', '-DROPDOWN2-'):
        print('siu')
        selected_option = values['-DROPDOWN-']
        selected_option2 = values['-DROPDOWN2-']
        update_layout(window, selected_option, selected_option2)

    elif event in ('pop'):
        print('asad')
# Cierra la ventana al finalizar
window.close()
