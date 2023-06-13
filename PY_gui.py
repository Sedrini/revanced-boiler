import PySimpleGUI as sg
from GUITOOLS.Choose_file import seleccionar_archivo
from GUITOOLS.patcher import pathcer_name
from GUITOOLS.download_files import check_files
from GUITOOLS.Api_info import check_update3,read_compatible_version
from GUITOOLS.layout.patches_layout import layu
from GUITOOLS.ping import estatus

def update_layout(window, selected_option):
    if selected_option == 'Youtube':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Poutube-'].update(visible=True)
    elif selected_option == 'Twitch':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=True)
        window['-Poutube-'].update(visible=False)
    elif selected_option == 'Youtube Music':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=True)
        window['-Twitch-'].update(visible=False)
        window['-Poutube-'].update(visible=False)
    elif selected_option == 'Tiktok':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=True)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Poutube-'].update(visible=False)
    elif selected_option == 'Twitter':
        window['-twitter-'].update(visible=True)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Poutube-'].update(visible=False)
    else:
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Poutube-'].update(visible=False)

def layu():
    compatible = read_compatible_version()


    estatos = estatus()
    options = ['Youtube', 'Youtube Music','Tiktok','Twitter', 'Twitch', 'Other' ]
    profiles = ['Default', 'MIO-DEMI']



    layout = [
        [sg.Text("  Revanced | Boiler: ", font='Helvetica', pad=((0, 100), (0, 0))), sg.Text(f"Status: {estatos}")],
        [sg.Column([
            [],
        ])],
        [sg.Column([
            [sg.Text('App   '), sg.DropDown(options, key='dropdown', size=(13, 1), enable_events=True),
             sg.Text('Target Version: '+ compatible[0], key='-Poutube-',visible=False, pad=((60, 0), (0, 0)),  border_width=10),
             sg.Text('Target Version: '+ compatible[1], key='-Twitch-',visible=False, pad=((60, 0), (0, 0)),  border_width=10),
             sg.Text('Target Version: '+ compatible[2], key='-ymusic-',visible=False, pad=((60, 0), (0, 0)),  border_width=10),
             sg.Text('Target Version: All :) ', key='-tiktok-',visible=False, pad=((60, 0), (0, 0)),  border_width=10),
             sg.Text('Target Version: '+ compatible[4], key='-twitter-',visible=False, pad=((60, 0), (0, 0)),  border_width=10),


             
             ],
            [sg.Text('Profile'), sg.DropDown(profiles, key='profile', size=(13, 1))],
            [sg.Button("Patch", key='patch'), sg.Button('Update', key='update')],
        ], element_justification='left')],
    ]
    return layout


def patch(option, profile):
    file = seleccionar_archivo()

    if file == "":
        sg.popup('EMPTY FILE')
    else:   
        if option == 'Youtube': name_apk = 'ReYoutube.apk' 
        if option == 'Youtube Music': name_apk = 'ReInstagram.apk'
        if option == 'Tiktok': name_apk = 'ReTwitch.apk'
        if option == 'Twitter': name_apk = 'ReTwitch.apk'
        if option == 'Twitch': name_apk = 'ReTwitch.apk'
        if option == 'Other': name_apk = 'ReCustom.apk'
        if option == '': None
        pathcer_name(option, file, name_apk, profile)
    
# Define el diseño de la GUI\
sg.theme('DarkTeal2')

layout = layu()

# Crea la ventana de la GUI
window = sg.Window("Revanced - Boiler",layout,size=(500, 350))

# Bucle principal para interactuar con la GUI
while True:
    event, values = window.read()

    # Si se cierra la ventana o se presiona el botón "Cancelar", finaliza el programa
    if event == sg.WINDOW_CLOSED or event == "Cancelar":
        break
    
    elif event == 'patch':
        profile = values['profile']
        selected_option = values['dropdown']
        if selected_option == '':
            None
        else:
            patch(selected_option, profile)

    elif event == 'update':
        check_update3()
        check_files()

    elif event in ('dropdown'):
        selected_option = values['dropdown']
        update_layout(window, selected_option)
      

# Cierra la ventana y finaliza el programa
window.close()


